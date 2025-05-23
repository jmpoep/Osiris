#pragma once

#include <CS2/Panorama/CUI_Item3dPanel.h>
#include <MemoryPatterns/PatternTypes/UiItem3dPanelPatternTypes.h>

template <typename HookContext>
class UiItem3dPanel {
public:
    UiItem3dPanel(HookContext& hookContext, cs2::CUI_Item3dPanel* uiItem3dPanel) noexcept
        : hookContext{hookContext}
        , uiItem3dPanel{uiItem3dPanel}
    {
    }

    using RawType = cs2::CUI_Item3dPanel;

    void createItem(const char* itemIdString) const noexcept
    {
        forceItemEntityToBeCreated();
        setItemId(itemIdString);
        assert(unknownFieldHasDefaultValue());
    }

private:
    void forceItemEntityToBeCreated() const noexcept
    {
        assert(unknownFieldHasDefaultValue());
        unknownField() = 0;
    }

    void setItemId(const char* itemIdString) const noexcept
    {
        if (const auto setItemItemIdFunction = hookContext.clientPatternSearchResults().template get<SetItemItemIdFunction>(); setItemItemIdFunction && uiItem3dPanel)
            setItemItemIdFunction(uiItem3dPanel, itemIdString, "");
    }

    [[nodiscard]] [[maybe_unused]] bool unknownFieldHasDefaultValue() const noexcept
    {
        constexpr auto kDefaultValue = -1;
        return unknownField().valueOr(kDefaultValue) == kDefaultValue;
    }

    [[nodiscard]] decltype(auto) unknownField() const noexcept
    {
        return hookContext.clientPatternSearchResults().template get<OffsetToItem3dPanelUnknownField>().of(uiItem3dPanel);
    }

    HookContext& hookContext;
    cs2::CUI_Item3dPanel* uiItem3dPanel;
};
