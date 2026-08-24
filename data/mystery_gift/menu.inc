	@ Six JP-only bytes following the 22-entry table.
	.byte 0xF7, 0x00, 0xAF, 0xF7, 0x01, 0xFF
sTextboxBorder_Pal:
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.incbin "build/graphics/mystery_gift/palettes/sTextboxBorder_Pal.gbapal"
sTextboxBorder_Gfx:
	@ GBA LZ77 stream, decompressed size 0x100 bytes.
	@ Mystery Gift textbox border tiles; exact LZ77 rebuilt from editable PNG.
	.incbin "build/graphics/mystery_gift/textbox_border.4bpp.lz"
sBGTemplates:
	.4byte 0x000000F8 @ BG0: charBase=2, mapBase=15, priority=0
	.4byte 0x000010E1 @ BG1: charBase=0, mapBase=14, priority=1
	.4byte 0x000020D2 @ BG2: charBase=0, mapBase=13, priority=2
	.4byte 0x000030C3 @ BG3: charBase=0, mapBase=12, priority=3
sMainWindows:
sWindowTemplate_MysteryGiftHeader:
	.byte 0 @ bg
	.byte 0 @ tilemapLeft
	.byte 0 @ tilemapTop
	.byte 30 @ width
	.byte 2 @ height
	.byte 12 @ paletteNum
	.2byte 0x0013 @ baseBlock

sWindowTemplate_MysteryGiftMessage:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 28 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x004F @ baseBlock

sWindowTemplate_MysteryGiftUnused:
	.byte 0 @ bg
	.byte 0 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 30 @ width
	.byte 5 @ height
	.byte 13 @ paletteNum
	.2byte 0x004F @ baseBlock

sWindowTemplate_MysteryGiftDummy:
	.byte 0xFF, 0, 0, 0, 0, 0
	.2byte 0
sWindowTemplate_YesNoMsg_Wide:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 28 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x00E5 @ baseBlock
sWindowTemplate_YesNoMsg:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 20 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x00E5 @ baseBlock
sWindowTemplate_GiftSelect:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 19 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x00E5 @ baseBlock
sWindowTemplate_ThreeOptions:
	.byte 0 @ bg
	.byte 8 @ tilemapLeft
	.byte 6 @ tilemapTop
	.byte 14 @ width
	.byte 6 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
sWindowTemplate_YesNoBox:
	.byte 0 @ bg
	.byte 23 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 5 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
sWindowTemplate_GiftSelect_3Options:
	.byte 0 @ bg
	.byte 22 @ tilemapLeft
	.byte 11 @ tilemapTop
	.byte 6 @ width
	.byte 8 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
sWindowTemplate_GiftSelect_2Options:
	.byte 0 @ bg
	.byte 22 @ tilemapLeft
	.byte 13 @ tilemapTop
	.byte 6 @ width
	.byte 6 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
sWindowTemplate_GiftSelect_1Option:
	.byte 0 @ bg
	.byte 22 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 6 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock

	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2C2514: @ 0x082C2514
	.globl gText_WonderCards
gText_WonderCards:
	.string "ふしぎなカード{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C2514) != 0x8
	.error ".Lbatch81_text_start_gText_Rom_2C2514 must retain its original byte length"
	.endif
	.globl gText_Rom_2C2518
	.set gText_Rom_2C2518, .Lbatch81_text_start_gText_Rom_2C2514 + 0x4

	@ src/data/union_room.h:552 sText_WonderNews (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2C251C: @ 0x082C251C
	.globl gText_WonderNews
gText_WonderNews:
	.string "ふしぎなニュース{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C251C) != 0x9
	.error ".Lbatch81_text_start_gText_Rom_2C251C must retain its original byte length"
	.endif
	.globl gText_Rom_2C2520
	.set gText_Rom_2C2520, .Lbatch81_text_start_gText_Rom_2C251C + 0x4
sText_JoySpot: @ 0x082C2525
	.string "　　　ジョイスポット{EOS}"

	@ src/data/easy_chat/easy_chat_group_people.h:310 easy_chat_group_people_line_310 (+2 aliases)
.Lbatch81_text_start_gText_Rom_2C2530: @ 0x082C2530
gText_Friend2:
	.string "ともだち{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C2530) > 0x5
	.error ".Lbatch81_text_start_gText_Rom_2C2530 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C2530) < 0x5
	.space 0x5 - (. - .Lbatch81_text_start_gText_Rom_2C2530)
	.endif
	.space 0x3, 0x00

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
.Lbatch85_alias_start_gText_Rom_2C2538: @ 0x082C2538
gText_Exit3:
gText_Cancel2:
	.string "やめる{EOS}"
	.if (. - .Lbatch85_alias_start_gText_Rom_2C2538) > 0x4
	.error ".Lbatch85_alias_start_gText_Rom_2C2538 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch85_alias_start_gText_Rom_2C2538) < 0x4
	.space 0x4 - (. - .Lbatch85_alias_start_gText_Rom_2C2538)
	.endif

	@ gText_WirelessCommunication starts at 0x082C2528.
	@ The preceding generated file currently exposes the containing
	@ address range through .Lbatch81_text_start_gText_Rom_2C251C, so define the semantic alias here.
	.globl gText_WirelessCommunication
	.set gText_WirelessCommunication, .Lbatch81_text_start_gText_Rom_2C251C + 0xC
sListMenuItems_CardsOrNews:
	.4byte gText_WonderCards
	.4byte 0
	.4byte gText_WonderNews
	.4byte 1
	.4byte gText_Exit3
	.4byte -2 @ LIST_CANCEL
sListMenuItems_WirelessOrFriend:
	.4byte gText_WirelessCommunication
	.4byte 0
	.4byte gText_Friend2
	.4byte 1
	.4byte gText_Cancel2
	.4byte -2 @ LIST_CANCEL
sListMenuTemplate_ThreeOptions:
	.4byte 0 @ items; supplied at runtime
	.4byte ListMenuDefaultCursorMoveFunc
	.4byte 0 @ itemPrintFunc
	.2byte 3 @ totalItems
	.2byte 3 @ maxShowed
	.byte 0 @ windowId; overwritten at runtime
	.byte 0 @ header_X
	.byte 11 @ item_X
	.byte 1 @ cursor_X
	.byte (2 << 4) | 2 @ cursorPal=2, upText_Y=2
	.byte (3 << 4) | 1 @ cursorShadowPal=3, fillValue=1
	.byte 0 @ lettersSpacing=0, itemVerticalPadding=0, scrollMultiple=0
	.byte 1 @ fontId=1, cursorKind=0

	.globl gText_Receive
gText_Receive: @ 0x082C2584
	.string "よみこむ{EOS}"
	.space 3, 0 @ alignment

	@ src/data/party_menu.h:811 party_menu_line_811 (+1 aliases)
.Lbatch81_text_start_gText_Rom_2C258C: @ 0x082C258C
gText_Send:
	.string "おくる{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C258C) > 0x4
	.error ".Lbatch81_text_start_gText_Rom_2C258C may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C258C) < 0x4
	.space 0x4 - (. - .Lbatch81_text_start_gText_Rom_2C258C)
	.endif

	@ src/data/party_menu.h:815 party_menu_line_815 (+2 aliases)
.Lbatch81_text_start_gText_Rom_2C2590: @ 0x082C2590
gText_Toss:
	.string "すてる{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C2590) > 0x4
	.error ".Lbatch81_text_start_gText_Rom_2C2590 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C2590) < 0x4
	.space 0x4 - (. - .Lbatch81_text_start_gText_Rom_2C2590)
	.endif
sListMenuItems_ReceiveSendToss:
	.4byte gText_Receive
	.4byte 0
	.4byte gText_Send
	.4byte 1
	.4byte gText_Toss
	.4byte 2
	.4byte gText_Cancel2
	.4byte -2 @ LIST_CANCEL

sListMenuItems_ReceiveToss:
	.4byte gText_Receive
	.4byte 0
	.4byte gText_Toss
	.4byte 2
	.4byte gText_Cancel2
	.4byte -2 @ LIST_CANCEL

sListMenuItems_ReceiveSend:
	.4byte gText_Receive
	.4byte 0
	.4byte gText_Send
	.4byte 1
	.4byte gText_Cancel2
	.4byte -2 @ LIST_CANCEL

sListMenuItems_Receive:
	.4byte gText_Receive
	.4byte 0
	.4byte gText_Cancel2
	.4byte -2 @ LIST_CANCEL
sListMenu_ReceiveSendToss:
	.4byte sListMenuItems_ReceiveSendToss
	.4byte ListMenuDefaultCursorMoveFunc
	.4byte 0 @ itemPrintFunc
	.2byte 4 @ totalItems
	.2byte 4 @ maxShowed
	.byte 0 @ windowId; overwritten at runtime
	.byte 0 @ header_X
	.byte 10 @ item_X
	.byte 1 @ cursor_X
	.byte (2 << 4) | 1 @ cursorPal=2, upText_Y=1
	.byte (3 << 4) | 1 @ cursorShadowPal=3, fillValue=1
	.byte (0 << 6) | (0 << 3) | 1 @ scrollMultiple=0, itemVerticalPadding=0, lettersSpacing=1
	.byte (0 << 6) | 1 @ cursorKind=0, fontId=1
sListMenu_ReceiveToss:
	.4byte sListMenuItems_ReceiveToss
	.4byte ListMenuDefaultCursorMoveFunc
	.4byte 0 @ itemPrintFunc
	.2byte 3 @ totalItems
	.2byte 3 @ maxShowed
	.byte 0 @ windowId; overwritten at runtime
	.byte 0 @ header_X
	.byte 10 @ item_X
	.byte 1 @ cursor_X
	.byte (2 << 4) | 2 @ cursorPal=2, upText_Y=2
	.byte (3 << 4) | 1 @ cursorShadowPal=3, fillValue=1
	.byte (0 << 6) | (0 << 3) | 0 @ scrollMultiple=0, itemVerticalPadding=0, lettersSpacing=0
	.byte (0 << 6) | 1 @ cursorKind=0, fontId=1
sListMenu_ReceiveSend:
	.4byte sListMenuItems_ReceiveSend
	.4byte ListMenuDefaultCursorMoveFunc
	.4byte 0 @ itemPrintFunc
	.2byte 3 @ totalItems
	.2byte 3 @ maxShowed
	.byte 0 @ windowId; overwritten at runtime
	.byte 0 @ header_X
	.byte 10 @ item_X
	.byte 1 @ cursor_X
	.byte (2 << 4) | 2 @ cursorPal=2, upText_Y=2
	.byte (3 << 4) | 1 @ cursorShadowPal=3, fillValue=1
	.byte (0 << 6) | (0 << 3) | 1 @ scrollMultiple=0, itemVerticalPadding=0, lettersSpacing=1
	.byte (0 << 6) | 1 @ cursorKind=0, fontId=1
sListMenu_Receive:
	.4byte sListMenuItems_Receive
	.4byte ListMenuDefaultCursorMoveFunc
	.4byte 0 @ itemPrintFunc
	.2byte 2 @ totalItems
	.2byte 2 @ maxShowed
	.byte 0 @ windowId; overwritten at runtime
	.byte 0 @ header_X
	.byte 10 @ item_X
	.byte 1 @ cursor_X
	.byte (2 << 4) | 1 @ cursorPal=2, upText_Y=1
	.byte (3 << 4) | 1 @ cursorShadowPal=3, fillValue=1
	.byte (0 << 6) | (1 << 3) | 1 @ scrollMultiple=0, itemVerticalPadding=1, lettersSpacing=1
	.byte (0 << 6) | 1 @ cursorKind=0, fontId=1

	@ src/strings.c:1050 gText_VarietyOfEventsImportedWireless
.Lbatch81_text_start_gText_Rom_2C2654: @ 0x082C2654
gText_VarietyOfEventsImportedWireless:
	.string "ワイヤレスで いろいろな できごとを\nよみこみます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C2654) > 0x1a
	.error ".Lbatch81_text_start_gText_Rom_2C2654 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C2654) < 0x1a
	.space 0x1a - (. - .Lbatch81_text_start_gText_Rom_2C2654)
	.endif

	@ src/strings.c:1051 gText_WonderCardsInPossession
.Lbatch81_text_start_gText_Rom_2C266E: @ 0x082C266E
gText_WonderCardsInPossession:
	.string "  もっている ふしぎなカードを\nみることが できます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C266E) > 0x1c
	.error ".Lbatch81_text_start_gText_Rom_2C266E may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C266E) < 0x1c
	.space 0x1c - (. - .Lbatch81_text_start_gText_Rom_2C266E)
	.endif

	@ src/strings.c:1052 gText_ReadNewsThatArrived
.Lbatch81_text_start_gText_Rom_2C268A: @ 0x082C268A
gText_ReadNewsThatArrived:
	.string "  おくられてきた ニュースを\nみることが できます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C268A) > 0x1b
	.error ".Lbatch81_text_start_gText_Rom_2C268A may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C268A) < 0x1b
	.space 0x1b - (. - .Lbatch81_text_start_gText_Rom_2C268A)
	.endif

	@ src/strings.c:1053 gText_ReturnToTitle
.Lbatch81_text_start_gText_Rom_2C26A5: @ 0x082C26A5
gText_ReturnToTitle:
	.string "   タイトルに もどります{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C26A5) > 0xf
	.error ".Lbatch81_text_start_gText_Rom_2C26A5 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C26A5) < 0xf
	.space 0xf - (. - .Lbatch81_text_start_gText_Rom_2C26A5)
	.endif
sUnusedMenuTexts:
	.4byte gText_VarietyOfEventsImportedWireless
	.4byte gText_WonderCardsInPossession + 2
	.4byte gText_ReadNewsThatArrived + 2
	.4byte gText_ReturnToTitle + 3

	@ src/strings.c:1054 gText_DontHaveCardNewOneInput
.Lbatch81_text_start_gText_Rom_2C26C4: @ 0x082C26C4
gText_DontHaveCardNewOneInput:
	.string "ふしぎなカードを もっていないので\nあたらしく カードを よみこみます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C26C4) > 0x24
	.error ".Lbatch81_text_start_gText_Rom_2C26C4 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C26C4) < 0x24
	.space 0x24 - (. - .Lbatch81_text_start_gText_Rom_2C26C4)
	.endif

	@ src/strings.c:1055 gText_DontHaveNewsNewOneInput
.Lbatch81_text_start_gText_Rom_2C26E8: @ 0x082C26E8
gText_DontHaveNewsNewOneInput:
	.string "ふしぎなニュースを もっていないので\nあたらしく ニュースを よみこみます{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C26E8) > 0x26
	.error ".Lbatch81_text_start_gText_Rom_2C26E8 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_2C26E8) < 0x26
	.space 0x26 - (. - .Lbatch81_text_start_gText_Rom_2C26E8)
	.endif

	@ src/strings.c:1056 gText_WhereShouldCardBeAccessed
	@ Preserve exact byte length: internal label.
.Lbatch81_text_start_gText_Rom_2C270E: @ 0x082C270E
gText_WhereShouldCardBeAccessed:
	.string "  どちらから ふしぎなカードを\nよみこみ ますか?{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C270E) != 0x1b
	.error ".Lbatch81_text_start_gText_Rom_2C270E must retain its original byte length"
	.endif

	@ src/strings.c:1057 gText_WhereShouldNewsBeAccessed
	@ Preserve exact byte length: internal label.
.Lbatch81_text_start_gText_Rom_2C2729: @ 0x082C2729
gText_WhereShouldNewsBeAccessed:
	.string "   どちらから ふしぎなニュースを\nよみこみ ますか?{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_2C2729) != 0x1d
	.error ".Lbatch81_text_start_gText_Rom_2C2729 must retain its original byte length"
	.endif
	.space 2, 0 @ align gText_CommunicationStandbyBButtonCancel

	.globl gText_CommunicationStandbyBButtonCancel
gText_CommunicationStandbyBButtonCancel: @ 0x082C2748
	.string "つうしん　たいき　ちゅう　です\n,,,Bボタンで　キャンセル　します{EOS}"
	.if (. - gText_CommunicationStandbyBButtonCancel) != 0x23
	.error "gText_CommunicationStandbyBButtonCancel must retain its original byte length"
	.endif
	.space 0x1, 0x00 @ alignment

	@ asm/mystery_gift.s:2007 task00_mystery_gift
	.globl gText_Communicating
gText_Communicating: @ 0x082C276C
	.globl gText_Communicating
	.string "つうしん　しています,,,{EOS}"
	.if (. - gText_Communicating) > 0xe
	.error "gText_Communicating may not grow beyond its original slot"
	.endif
	.if (. - gText_Communicating) < 0xe
	.space 0xe - (. - gText_Communicating)
	.endif

	@ src/strings.c:1060 gText_CommunicationCompleted
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_CommunicationCompleted
gText_MysteryGift_CommunicationCompleted: @ 0x082C277A
	.string "  つうしんが しゅうりょう しました{EOS}"
	.if (. - gText_MysteryGift_CommunicationCompleted) != 0x14
	.error "gText_MysteryGift_CommunicationCompleted must retain its original byte length"
	.endif
	.globl gText_CommunicationCompleted
	.set gText_CommunicationCompleted, gText_MysteryGift_CommunicationCompleted + 0x2

	@ src/strings.c:1061 gText_CommunicationError
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_CommunicationError
gText_MysteryGift_CommunicationError: @ 0x082C278E
	.string "  つうしんに しっぱい しました{EOS}"
	.if (. - gText_MysteryGift_CommunicationError) != 0x12
	.error "gText_MysteryGift_CommunicationError must retain its original byte length"
	.endif
	.globl gText_CommunicationError
	.set gText_CommunicationError, gText_MysteryGift_CommunicationError + 0x2

	@ src/strings.c:1062 gText_CommunicationCanceled
	.globl gText_CommunicationCanceled
gText_CommunicationCanceled: @ 0x082C27A0
	.globl gText_CommunicationCanceled
	.string "つうしんを キャンセル しました{EOS}"
	.if (. - gText_CommunicationCanceled) > 0x11
	.error "gText_CommunicationCanceled may not grow beyond its original slot"
	.endif
	.if (. - gText_CommunicationCanceled) < 0x11
	.space 0x11 - (. - gText_CommunicationCanceled)
	.endif

	@ src/strings.c:1063 gText_ThrowAwayWonderCard
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_ThrowAwayWonderCard
gText_MysteryGift_ThrowAwayWonderCard: @ 0x082C27B1
	.string "   いまの ふしぎなカードを すてて\nあたらしい カードを よみこみますか?{EOS}"
	.if (. - gText_MysteryGift_ThrowAwayWonderCard) != 0x28
	.error "gText_MysteryGift_ThrowAwayWonderCard must retain its original byte length"
	.endif
	.globl gText_ThrowAwayWonderCard
	.set gText_ThrowAwayWonderCard, gText_MysteryGift_ThrowAwayWonderCard + 0x3

	@ src/strings.c:1064 gText_HaventReceivedCardsGift
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_HaventReceivedCardsGift
gText_MysteryGift_HaventReceivedCardsGift: @ 0x082C27D9
	.string "   まだ カードの おくりものを もらって\nませんが ほんとうに よみこみますか?{EOS}"
	.if (. - gText_MysteryGift_HaventReceivedCardsGift) != 0x2b
	.error "gText_MysteryGift_HaventReceivedCardsGift must retain its original byte length"
	.endif
	.globl gText_HaventReceivedCardsGift
	.set gText_HaventReceivedCardsGift, gText_MysteryGift_HaventReceivedCardsGift + 0x3

	@ src/strings.c:1065 gText_WonderCardReceivedFrom
	.globl gText_WonderCardReceivedFrom
gText_WonderCardReceivedFrom: @ 0x082C2804
	.globl gText_WonderCardReceivedFrom
	.string "{STR_VAR_1}から ふしぎなカードが\nおくられて きました!{EOS}"
	.if (. - gText_WonderCardReceivedFrom) > 0x1a
	.error "gText_WonderCardReceivedFrom may not grow beyond its original slot"
	.endif
	.if (. - gText_WonderCardReceivedFrom) < 0x1a
	.space 0x1a - (. - gText_WonderCardReceivedFrom)
	.endif
	.space 0x2, 0x00
	.globl gText_WonderNewsReceivedFrom
gText_WonderNewsReceivedFrom: @ 0x082C2820
	.string "{STR_VAR_1}から ニュースが\nおくられて きました!{EOS}"

	@ src/strings.c:1067 gText_WonderCardReceived
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_WonderCardReceived
gText_MysteryGift_WonderCardReceived: @ 0x082C2837
	.string " あたらしい ふしぎなカードが\nおくられて きました!{EOS}"
	.if (. - gText_MysteryGift_WonderCardReceived) != 0x1c
	.error "gText_MysteryGift_WonderCardReceived must retain its original byte length"
	.endif
	.globl gText_WonderCardReceived
	.set gText_WonderCardReceived, gText_MysteryGift_WonderCardReceived + 0x1

	@ src/strings.c:1068 gText_WonderNewsReceived
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_WonderNewsReceived
gText_MysteryGift_WonderNewsReceived: @ 0x082C2853
	.string " あたらしい ニュースが\nおくられて きました!{EOS}"
	.if (. - gText_MysteryGift_WonderNewsReceived) != 0x19
	.error "gText_MysteryGift_WonderNewsReceived must retain its original byte length"
	.endif
	.globl gText_WonderNewsReceived
	.set gText_WonderNewsReceived, gText_MysteryGift_WonderNewsReceived + 0x1
	.globl gText_NewStampReceived
gText_NewStampReceived: @ 0x082C286C
	.string "あたらしい スタンプが\nおくられて きました!{EOS}"
	.globl gText_NewTrainerReceived
gText_NewTrainerReceived: @ 0x082C2884
	.string "あたらしい トレーナーが\nおくられて きました!{EOS}"
	.space 3, 0 @ alignment
	.globl gText_AlreadyHadCard
gText_AlreadyHadCard: @ 0x082C28A0
	.string "おなじ ふしぎなカードを\nすでに もっています{EOS}"

	@ src/strings.c:1072 gText_AlreadyHadNews
	.globl gText_AlreadyHadNews
gText_AlreadyHadNews: @ 0x082C28B8
	.globl gText_AlreadyHadNews
	.string "おなじ ニュースを\nすでに もっています{EOS}"
	.if (. - gText_AlreadyHadNews) > 0x15
	.error "gText_AlreadyHadNews may not grow beyond its original slot"
	.endif
	.if (. - gText_AlreadyHadNews) < 0x15
	.space 0x15 - (. - gText_AlreadyHadNews)
	.endif

	@ src/strings.c:1073 gText_AlreadyHadStamp
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_AlreadyHadStamp
gText_MysteryGift_AlreadyHadStamp: @ 0x082C28CD
	.string "   おなじ スタンプを\nすでに もっています{EOS}"
	.if (. - gText_MysteryGift_AlreadyHadStamp) != 0x18
	.error "gText_MysteryGift_AlreadyHadStamp must retain its original byte length"
	.endif
	.globl gText_AlreadyHadStamp
	.set gText_AlreadyHadStamp, gText_MysteryGift_AlreadyHadStamp + 0x3

	@ src/strings.c:1074 gText_NoMoreRoomForStamps
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_NoMoreRoomForStamps
gText_MysteryGift_NoMoreRoomForStamps: @ 0x082C28E5
	.string "   スタンプが いっぱい なので\nもう おせません!{EOS}"
	.if (. - gText_MysteryGift_NoMoreRoomForStamps) != 0x1c
	.error "gText_MysteryGift_NoMoreRoomForStamps must retain its original byte length"
	.endif
	.globl gText_NoMoreRoomForStamps
	.set gText_NoMoreRoomForStamps, gText_MysteryGift_NoMoreRoomForStamps + 0x3

	@ src/strings.c:1075 gText_RecordUploadedViaWireless
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_RecordUploadedViaWireless
gText_MysteryGift_RecordUploadedViaWireless: @ 0x082C2901
	.string "   じぶんの きろくを\nジョイスポットに よみこませ ました!{EOS}"
	.if (. - gText_MysteryGift_RecordUploadedViaWireless) != 0x21
	.error "gText_MysteryGift_RecordUploadedViaWireless must retain its original byte length"
	.endif
	.globl gText_RecordUploadedViaWireless
	.set gText_RecordUploadedViaWireless, gText_MysteryGift_RecordUploadedViaWireless + 0x3

	@ src/strings.c:1076 gText_CantAcceptCardFromTrainer
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_CantAcceptCardFromTrainer
gText_MysteryGift_CantAcceptCardFromTrainer: @ 0x082C2922
	.string "  この あいて からは ふしぎなカードを\nうけとれません!{EOS}"
	.if (. - gText_MysteryGift_CantAcceptCardFromTrainer) != 0x1f
	.error "gText_MysteryGift_CantAcceptCardFromTrainer must retain its original byte length"
	.endif
	.globl gText_CantAcceptCardFromTrainer
	.set gText_CantAcceptCardFromTrainer, gText_MysteryGift_CantAcceptCardFromTrainer + 0x2
	.space 0x3, 0x00
	.globl gText_CantAcceptNewsFromTrainer
gText_CantAcceptNewsFromTrainer: @ 0x082C2944
	.string "この あいて からは ニュースを\nうけとれません!{EOS}"

	@ src/strings.c:1078 gText_NothingSentOver
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_MysteryGift_NothingSentOver
gText_MysteryGift_NothingSentOver: @ 0x082C295E
	.string "  なにも おくられて\nきません でした{EOS}"
	.if (. - gText_MysteryGift_NothingSentOver) != 0x15
	.error "gText_MysteryGift_NothingSentOver must retain its original byte length"
	.endif
	.globl gText_NothingSentOver
	.set gText_NothingSentOver, gText_MysteryGift_NothingSentOver + 0x2

	@ src/strings.c:1079 gText_WhatToDoWithCards
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_WhatToDoWithCards
gText_MysteryGift_WhatToDoWithCards: @ 0x082C2973
	.string " カードを どうしますか?{EOS}"
	.if (. - gText_MysteryGift_WhatToDoWithCards) != 0xe
	.error "gText_MysteryGift_WhatToDoWithCards must retain its original byte length"
	.endif
	.globl gText_WhatToDoWithCards
	.set gText_WhatToDoWithCards, gText_MysteryGift_WhatToDoWithCards + 0x1

	@ src/strings.c:1080 gText_WhatToDoWithNews
	@ Preserve exact byte length: internal label.
	.globl gText_MysteryGift_WhatToDoWithNews
gText_MysteryGift_WhatToDoWithNews: @ 0x082C2981
	.string "   ニュースを どうしますか?{EOS}"
	.if (. - gText_MysteryGift_WhatToDoWithNews) != 0x11
	.error "gText_MysteryGift_WhatToDoWithNews must retain its original byte length"
	.endif
	.globl gText_WhatToDoWithNews
	.set gText_WhatToDoWithNews, gText_MysteryGift_WhatToDoWithNews + 0x3
	.space 0x2, 0x00

	@ asm/mystery_gift.s:2502 task00_mystery_gift
	.globl gText_SendingWonderCard
gText_SendingWonderCard: @ 0x082C2994
	.globl gText_SendingWonderCard
	.string "ふしぎなカード　を\nおくって　います,,,{EOS}"
	.if (. - gText_SendingWonderCard) > 0x16
	.error "gText_SendingWonderCard may not grow beyond its original slot"
	.endif
	.if (. - gText_SendingWonderCard) < 0x16
	.space 0x16 - (. - gText_SendingWonderCard)
	.endif
	.space 0x2, 0x00

	@ asm/mystery_gift.s:2512 task00_mystery_gift
	.globl gText_SendingWonderNews
gText_SendingWonderNews: @ 0x082C29AC
	.globl gText_SendingWonderNews
	.string "ニュースを\nおくって　います,,,{EOS}"
	.if (. - gText_SendingWonderNews) > 0x12
	.error "gText_SendingWonderNews may not grow beyond its original slot"
	.endif
	.if (. - gText_SendingWonderNews) < 0x12
	.space 0x12 - (. - gText_SendingWonderNews)
	.endif
	.space 0x2, 0x00


	@ src/strings.c:1083 gText_WonderCardSentTo
	.globl gText_WonderCardSentTo
gText_WonderCardSentTo: @ 0x082C29C0
	.globl gText_WonderCardSentTo
	.string "{STR_VAR_1}に ふしぎなカードを\nおくり ました!{EOS}"
	.if (. - gText_WonderCardSentTo) > 0x16
	.error "gText_WonderCardSentTo may not grow beyond its original slot"
	.endif
	.if (. - gText_WonderCardSentTo) < 0x16
	.space 0x16 - (. - gText_WonderCardSentTo)
	.endif
	.space 0x2, 0x00
	.globl gText_WonderNewsSentTo
gText_WonderNewsSentTo: @ 0x082C29D8
	.string "{STR_VAR_1}に　ニュース　を\nおくり　ました！{EOS}"
	.globl gText_StampSentTo
gText_StampSentTo: @ 0x082C29EC
	.string "{STR_VAR_1}に　スタンプ　を\nおくり　ました！{EOS}"

	@ src/strings.c:1086 gText_GiftSentTo
	.globl gText_GiftSentTo
gText_GiftSentTo: @ 0x082C2A00
	.globl gText_GiftSentTo
	.string "{STR_VAR_1}に おくりものを しました!{EOS}"
	.if (. - gText_GiftSentTo) > 0x11
	.error "gText_GiftSentTo may not grow beyond its original slot"
	.endif
	.if (. - gText_GiftSentTo) < 0x11
	.space 0x11 - (. - gText_GiftSentTo)
	.endif

	@ src/strings.c:1087 gText_OtherTrainerHasCard
	@ Preserve exact byte length: internal label.
	.globl gText_OtherTrainerHasCard
gText_OtherTrainerHasCard: @ 0x082C2A11
	.globl gText_OtherTrainerHasCard
	.string "   あいてが おなじ\nふしぎなカードを もっています!{EOS}"
	.if (. - gText_OtherTrainerHasCard) != 0x1d
	.error "gText_OtherTrainerHasCard must retain its original byte length"
	.endif

	@ src/strings.c:1088 gText_OtherTrainerHasNews
	@ Preserve exact byte length: internal label.
	.globl gText_OtherTrainerHasNews
gText_OtherTrainerHasNews: @ 0x082C2A2E
	.globl gText_OtherTrainerHasNews
	.string "  あいてが おなじ\nニュースを もっています!{EOS}"
	.if (. - gText_OtherTrainerHasNews) != 0x19
	.error "gText_OtherTrainerHasNews must retain its original byte length"
	.endif

	@ src/strings.c:1089 gText_OtherTrainerHasStamp
	@ Preserve exact byte length: internal label.
	.globl gText_OtherTrainerHasStamp
gText_OtherTrainerHasStamp: @ 0x082C2A47
	.globl gText_OtherTrainerHasStamp
	.string " あいてが おなじ\nスタンプを もっています!{EOS}"
	.if (. - gText_OtherTrainerHasStamp) != 0x18
	.error "gText_OtherTrainerHasStamp must retain its original byte length"
	.endif

	@ src/strings.c:1090 gText_OtherTrainerCanceled
	@ Preserve exact byte length: internal label.
	.globl gText_OtherTrainerCanceled
gText_OtherTrainerCanceled: @ 0x082C2A5F
	.globl gText_OtherTrainerCanceled
	.string " あいてが つうしんを \nキャンセル しました{EOS}"
	.if (. - gText_OtherTrainerCanceled) != 0x18
	.error "gText_OtherTrainerCanceled must retain its original byte length"
	.endif

	@ src/strings.c:1091 gText_CantSendGiftToTrainer
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_CantSendGiftToTrainer
gText_CantSendGiftToTrainer: @ 0x082C2A77
	.string " この あいて には\nふしぎなおくりものを わたせません{EOS}"
	.if (. - gText_CantSendGiftToTrainer) != 0x1d
	.error "gText_CantSendGiftToTrainer must retain its original byte length"
	.endif

	@ src/strings.c:1092 gText_IfThrowAwayCardEventWontHappen
	.globl gText_IfThrowAwayCardEventWontHappen
gText_IfThrowAwayCardEventWontHappen: @ 0x082C2A94
	.string "カードをすてると できごとも\nなくなりますが よいですか?{EOS}"
	.if (. - gText_IfThrowAwayCardEventWontHappen) > 0x1e
	.error "gText_IfThrowAwayCardEventWontHappen may not grow beyond its original slot"
	.endif
	.if (. - gText_IfThrowAwayCardEventWontHappen) < 0x1e
	.space 0x1e - (. - gText_IfThrowAwayCardEventWontHappen)
	.endif

	@ src/strings.c:1093 gText_OkayToDiscardNews
	@ Preserve exact byte length: internal label.
	.globl gText_OkayToDiscardNews
gText_OkayToDiscardNews: @ 0x082C2AB2
	.string "  ほんとうに ニュースを\nすてても よいですか?{EOS}"
	.if (. - gText_OkayToDiscardNews) != 0x1a
	.error "gText_OkayToDiscardNews must retain its original byte length"
	.endif

	@ src/strings.c:1094 gText_HaventReceivedGiftOkayToDiscard
	.globl gText_HaventReceivedGiftOkayToDiscard
gText_HaventReceivedGiftOkayToDiscard: @ 0x082C2ACC
	.string "おくりものを もらってません\nが ほんとうに すてますか?{EOS}"
	.if (. - gText_HaventReceivedGiftOkayToDiscard) > 0x1e
	.error "gText_HaventReceivedGiftOkayToDiscard may not grow beyond its original slot"
	.endif
	.if (. - gText_HaventReceivedGiftOkayToDiscard) < 0x1e
	.space 0x1e - (. - gText_HaventReceivedGiftOkayToDiscard)
	.endif

	@ src/strings.c:1095 gText_DataWillBeSaved
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_DataWillBeSaved
gText_DataWillBeSaved: @ 0x082C2AEA
	.string "  レポートを かいています\nしばらく おまちください{EOS}"
	.if (. - gText_DataWillBeSaved) != 0x1c
	.error "gText_DataWillBeSaved must retain its original byte length"
	.endif

	@ src/strings.c:1096 gText_SaveCompletedPressA
	@ Preserve exact byte length: internal label.
	.globl gText_SaveCompletedPressA
gText_SaveCompletedPressA: @ 0x082C2B06
	.string "  レポートを かきこみました!\nAボタンを おしてください{EOS}"
	.if (. - gText_SaveCompletedPressA) != 0x1f
	.error "gText_SaveCompletedPressA must retain its original byte length"
	.endif

	@ src/strings.c:1097 gText_WonderCardThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_WonderCardThrownAway
gText_WonderCardThrownAway: @ 0x082C2B25
	.string "   ふしぎなカードを すてました{EOS}"
	.if (. - gText_WonderCardThrownAway) != 0x12
	.error "gText_WonderCardThrownAway must retain its original byte length"
	.endif

	@ src/strings.c:1098 gText_WonderNewsThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_WonderNewsThrownAway
gText_WonderNewsThrownAway: @ 0x082C2B37
	.string " ニュースを すてました{EOS}"
	.if (. - gText_WonderNewsThrownAway) != 0xd
	.error "gText_WonderNewsThrownAway must retain its original byte length"
	.endif
	.globl gText_MysteryGift
gText_MysteryGift: @ 0x082C2B44
	.string "ふしぎなおくりもの{EOS}"
	.space 2, 0 @ alignment

	@ src/strings.c:1101 gText_PickOKCancel
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PickOKCancel
gText_PickOKCancel: @ 0x082C2B50
	.string "{DPAD_UPDOWN}えらぶ {A_BUTTON}けってい {B_BUTTON}やめる{EOS}"
	.if (. - gText_PickOKCancel) != 0x13
	.error "gText_PickOKCancel must retain its original byte length"
	.endif
	.space 0x1, 0x00
sTextColors_Header:
	.byte 0, 1, 2 @ TRANSPARENT, WHITE, DARK_GRAY
	.byte 0 @ alignment
sTextColors_Header_Copy:
	.byte 0, 1, 2 @ TRANSPARENT, WHITE, DARK_GRAY
	.byte 0 @ alignment
sMG_Ereader_TextColor_2:
	.byte 1, 2, 3 @ WHITE, DARK_GRAY, LIGHT_GRAY

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:154 easy_chat_group_lifestyle_line_154
	.globl gText_Rom_2C2B6F
gText_Rom_2C2B6F: @ 0x082C2B6F
	.string "テスト{EOS}"
	.if (. - gText_Rom_2C2B6F) > 0x4
	.error "gText_Rom_2C2B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2B6F) < 0x4
	.space 0x4 - (. - gText_Rom_2C2B6F)
	.endif
	@ Decoded text from ROM range: offset=0x2C2B73, size=0x9
	.string "むげんのチケット{EOS}"
sUnionRoomObjGfxIds:
	@ MALE
	.byte 0x21, 0x2C, 0x1F, 0x23, 0x25, 0x24, 0x41, 0x42, 0x00, 0x00
	@ FEMALE
	.byte 0x22, 0x28, 0x20, 0x2F, 0x2F, 0x0E, 0x14, 0x2D, 0x00, 0x00
sUnionRoomPlayerCoords:
	.2byte 4, 6
	.2byte 13, 8
	.2byte 10, 6
	.2byte 1, 8
	.2byte 13, 4
	.2byte 7, 4
	.2byte 1, 4
	.2byte 7, 8
sUnionRoomGroupOffsets:
	.byte 0, 0
	.byte 1, 0
	.byte 0, -1
	.byte -1, 0
	.byte 0, 1
sOppositeFacingDirection:
	.byte 0, 2, 1, 4, 3 @ NONE, NORTH, SOUTH, EAST, WEST
sMemberFacingDirections:
	.byte 1, 3, 1, 4, 2 @ SOUTH, WEST, SOUTH, EAST, NORTH
sUnionRoomLocalIds:
	.byte 9, 8, 7, 2, 6, 5, 4, 3
sHidePlayerFlags:
	.2byte 0x02BF, 0x02C0, 0x02C1, 0x02C2, 0x02C3, 0x02C4, 0x02C5, 0x02C6
sDebugFile_RfuUnionTool:
	.asciz "rfu_union_tool.c"
	.space 3, 0 @ alignment
sRfuUnionToolAssertLine:
	.4byte 48
sAssert_UnionObjWorkNotNull:
	.asciz "UnionObjWork != NULL"
sMovement_UnionPlayerExit:
	.byte 0x9C, 0xFE @ FLY_UP, STEP_END
sMovement_UnionPlayerEnter:
	.byte 0x9D, 0xFE @ FLY_DOWN, STEP_END
	.space 3, 0 @ alignment
sWirelessStatusPalettes:
	@ ANALYSIS: SEMANTIC_NUMERIC_WIRELESS_STATUS_PALETTES
	@ palette 0
	.incbin "build/graphics/mystery_gift/palettes/sWirelessStatusPalettes.gbapal"
	@ palette 1
	@ palette 2
	@ palette 3
	@ palette 4
	@ palette 5
	@ palette 6
	@ palette 7
	@ palette 8
	@ palette 9
	@ palette 10
	@ palette 11
	@ palette 12
	@ palette 13
	@ palette 14
	@ palette 15
sWirelessStatusBgTiles_Gfx:
	@ GBA LZ77: decompressed=0x800, stream=0x210, stored=0x210
	.incbin "build/graphics/mystery_gift/wireless_status_bg_tiles.4bpp.lz"
	.if (. - sWirelessStatusBgTiles_Gfx) > 0x210
	.error "sWirelessStatusBgTiles_Gfx exceeds its exact ROM slot"
	.endif
sWirelessStatusBgTiles_Tilemap:
	@ GBA LZ77: decompressed=0x800, stream=0x193, stored=0x194
	.incbin "build/graphics/mystery_gift/wireless_status_bg_tiles.bin.lz"
	.if (. - sWirelessStatusBgTiles_Tilemap) > 0x194
	.error "sWirelessStatusBgTiles_Tilemap exceeds its exact ROM slot"
	.endif
sWirelessStatusBgTemplates:
	.4byte 0x000001F8 @ bg=0, charBase=2, mapBase=31, priority=0
	.4byte 0x00001081 @ bg=1, charBase=0, mapBase=8, priority=1
sWirelessStatusWindowTemplates:
	@ WIN_TITLE
	.byte 0, 6, 0, 24, 3, 15
	.2byte 0x0001
	@ WIN_GROUP_NAMES
	.byte 0, 5, 4, 18, 15, 15
	.2byte 0x0049
	@ WIN_GROUP_COUNTS
	.byte 0, 21, 4, 6, 15, 15
	.2byte 0x0157
	@ DUMMY_WIN_TEMPLATE
	.byte 255, 0, 0, 0, 0, 0
	.2byte 0x0000

	@ src/strings.c:1025 gText_WirelessCommStatus
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_WirelessCommStatus
gText_WirelessCommStatus: @ 0x082C31DC
	.globl gText_WirelessCommStatus
	.string "ワイヤレス つうしん じょうきょう{EOS}"
	.if (. - gText_WirelessCommStatus) != 0x12
	.error "gText_WirelessCommStatus must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x2C31EE, size=0x32
	.string "こうかん　しているひと{EOS}"
	.string "たいせん　しているひと{EOS}"
	.string "ユニオンルームに　いるひと{EOS}"
	.string "つうしん　しているひと{EOS}"
	.globl gText_PeopleTrading
	.set gText_PeopleTrading, gText_WirelessCommStatus + 0x12
	.globl gText_PeopleBattling
	.set gText_PeopleBattling, gText_WirelessCommStatus + 0x1E
	.globl gText_PeopleInUnionRoom
	.set gText_PeopleInUnionRoom, gText_WirelessCommStatus + 0x2A
	.globl gText_PeopleCommunicating
	.set gText_PeopleCommunicating, gText_WirelessCommStatus + 0x38

	@ src/strings.c:1030 gText_F700Players
	.globl gText_F700Players
gText_F700Players: @ 0x082C3220
	.globl gText_F700Players
	.string "{DYNAMIC 0}にん{EOS}"
	.if (. - gText_F700Players) > 0x5
	.error "gText_F700Players may not grow beyond its original slot"
	.endif
	.if (. - gText_F700Players) < 0x5
	.space 0x5 - (. - gText_F700Players)
	.endif
	.space 0x1, 0x00

	@ src/strings.c:1031 gText_F701Players
	.globl gText_F701Players
gText_F701Players: @ 0x082C3226
	.globl gText_F701Players
	.string "{DYNAMIC 1}にん{EOS}"
	.if (. - gText_F701Players) > 0x5
	.error "gText_F701Players may not grow beyond its original slot"
	.endif
	.if (. - gText_F701Players) < 0x5
	.space 0x5 - (. - gText_F701Players)
	.endif
	.space 0x1, 0x00

	@ src/strings.c:1032 gText_F702Players
	.globl gText_F702Players
gText_F702Players: @ 0x082C322C
	.globl gText_F702Players
	.string "{DYNAMIC 2}にん{EOS}"
	.if (. - gText_F702Players) > 0x5
	.error "gText_F702Players may not grow beyond its original slot"
	.endif
	.if (. - gText_F702Players) < 0x5
	.space 0x5 - (. - gText_F702Players)
	.endif
	.space 0x1, 0x00

	@ src/strings.c:1033 gText_F703Players
	.globl gText_F703Players
gText_F703Players: @ 0x082C3232
	.globl gText_F703Players
	.string "{DYNAMIC 3}にん{EOS}"
	.if (. - gText_F703Players) > 0x5
	.error "gText_F703Players may not grow beyond its original slot"
	.endif
	.if (. - gText_F703Players) < 0x5
	.space 0x5 - (. - gText_F703Players)
	.endif
	.space 0x1, 0x00
sWirelessStatusHeaderTexts:
	.4byte gText_WirelessCommStatus
	.4byte gText_PeopleTrading
	.4byte gText_PeopleBattling
	.4byte gText_PeopleInUnionRoom
	.4byte gText_PeopleCommunicating
sWirelessStatusActivityGroupInfo:
	@ ANALYSIS: SEMANTIC_NUMERIC_WIRELESS_STATUS_TABLE
	.byte 0x01, 0x01, 2 @ BATTLE_SINGLE, BATTLE, 2
	.byte 0x02, 0x01, 2 @ BATTLE_DOUBLE, BATTLE, 2
	.byte 0x03, 0x01, 4 @ BATTLE_MULTI, BATTLE, 4
	.byte 0x04, 0x00, 2 @ TRADE, TRADE, 2
	.byte 0x06, 0x03, 2 @ WONDER_CARD_DUP, TOTAL, 2
	.byte 0x07, 0x03, 2 @ WONDER_NEWS_DUP, TOTAL, 2
	.byte 0x09, 0x03, 0 @ POKEMON_JUMP, TOTAL, dynamic
	.byte 0x0A, 0x03, 0 @ BERRY_CRUSH, TOTAL, dynamic
	.byte 0x0B, 0x03, 0 @ BERRY_PICK, TOTAL, dynamic
	.byte 0x0C, 0xFF, 0 @ SEARCH, NONE, dynamic
	.byte 0x0D, 0x00, 0 @ SPIN_TRADE, TRADE, dynamic
	.byte 0x10, 0x03, 0 @ BERRY_BLENDER, TOTAL, dynamic
	.byte 0x0F, 0x03, 0 @ RECORD_CORNER, TOTAL, dynamic
	.byte 0x40, 0x02, 1 @ UR_NONE, UNION, 1
	.byte 0x41, 0x02, 2 @ UR_BATTLE_SINGLE, UNION, 2
	.byte 0x44, 0x02, 2 @ UR_TRADE, UNION, 2
	.byte 0x45, 0x02, 0 @ UR_CHAT, UNION, dynamic
	.byte 0x48, 0x02, 2 @ UR_CARD, UNION, 2
	.byte 0x54, 0x02, 1 @ UR_PLYRTALK, UNION, 1
	.byte 0x53, 0x02, 2 @ UR_NPCTALK, UNION, 2
	.byte 0x51, 0x02, 1 @ UR_ACCEPT, UNION, 1
	.byte 0x52, 0x02, 1 @ UR_DECLINE, UNION, 1
	.byte 0x15, 0x03, 2 @ WONDER_CARD, TOTAL, 2
	.byte 0x16, 0x03, 2 @ WONDER_NEWS, TOTAL, 2
	.byte 0x17, 0x03, 0 @ CONTEST_COOL, TOTAL, dynamic
	.byte 0x18, 0x03, 0 @ CONTEST_BEAUTY, TOTAL, dynamic
	.byte 0x19, 0x03, 0 @ CONTEST_CUTE, TOTAL, dynamic
	.byte 0x1A, 0x03, 0 @ CONTEST_SMART, TOTAL, dynamic
	.byte 0x1B, 0x03, 0 @ CONTEST_TOUGH, TOTAL, dynamic
	.byte 0x1C, 0x01, 2 @ BATTLE_TOWER, BATTLE, 2
	.byte 0x0E, 0x01, 2 @ BATTLE_TOWER_OPEN, BATTLE, 2
	.space 3, 0 @ alignment
sUnionRoomBattleBgTemplates:
	.4byte 0x000001FC @ bg=0, charBase=3, mapBase=31
sUnionRoomBattleWindowTemplates:
	@ message window
	.byte 0, 3, 15, 24, 4, 14
	.2byte 0x0014
	@ DUMMY_WIN_TEMPLATE
	.byte 255, 0, 0, 0, 0, 0
	.2byte 0x0000
sUnionRoomBattleTextColors:
	.byte 1, 2, 3 @ WHITE, DARK_GRAY, LIGHT_GRAY

	@ src/strings.c:1145 gText_CommStandbyAwaitingOtherPlayer
	.globl gText_CommStandbyAwaitingOtherPlayer
gText_CommStandbyAwaitingOtherPlayer: @ 0x082C32C3
	.globl gText_CommStandbyAwaitingOtherPlayer
	.string "つうしんたいきちゅう\nあいての せんたくを まっています…{EOS}"
	.if (. - gText_CommStandbyAwaitingOtherPlayer) > 0x1e
	.error "gText_CommStandbyAwaitingOtherPlayer may not grow beyond its original slot"
	.endif
	.if (. - gText_CommStandbyAwaitingOtherPlayer) < 0x1e
	.space 0x1e - (. - gText_CommStandbyAwaitingOtherPlayer)
	.endif

	@ src/strings.c:1146 gText_BattleWasRefused
	.globl gText_BattleWasRefused
gText_BattleWasRefused: @ 0x082C32E1
	.globl gText_BattleWasRefused
	.string "たいせんを ことわられました{PAUSE 60}{EOS}"
	.if (. - gText_BattleWasRefused) > 0x12
	.error "gText_BattleWasRefused may not grow beyond its original slot"
	.endif
	.if (. - gText_BattleWasRefused) < 0x12
	.space 0x12 - (. - gText_BattleWasRefused)
	.endif

	@ src/strings.c:1147 gText_RefusedBattle
	.globl gText_RefusedBattle
gText_RefusedBattle: @ 0x082C32F3
	.globl gText_RefusedBattle
	.string "たいせんを ことわりました{PAUSE 60}{EOS}"
	.if (. - gText_RefusedBattle) > 0x11
	.error "gText_RefusedBattle may not grow beyond its original slot"
	.endif
	.if (. - gText_RefusedBattle) < 0x11
	.space 0x11 - (. - gText_RefusedBattle)
	.endif
sReceivedGiftFlags:
	.2byte 0x013A, 0x013B, 0x013C, 0x013D, 0x013E, 0x013F, 0x0140, 0x0141, 0x0142, 0x0143, 0x0144, 0x0145, 0x0146, 0x0147, 0x0148, 0x0149, 0x014A, 0x014B, 0x014C, 0x014D
sDebugFile_MEvent:
	.asciz "mevent.c"
	.space 3, 0 @ alignment
sMEventAssertLine:
	.4byte 48
sCard_TextColorTable:
	.byte 0, 2, 3 @ TRANSPARENT, DARK_GRAY, LIGHT_GRAY
	.byte 0, 1, 2 @ TRANSPARENT, WHITE, DARK_GRAY
	.space 2, 0 @ alignment
sCard_FooterTextOffsets:
	.byte 7, 4, 7
	.byte 0 @ alignment
sCard_WindowTemplates:
	@ CARD_WIN_HEADER
	.byte 1, 1, 1, 25, 4, 2
	.2byte 0x029C
	@ CARD_WIN_BODY
	.byte 1, 1, 6, 28, 8, 2
	.2byte 0x01BC
	@ CARD_WIN_FOOTER
	.byte 1, 1, 14, 28, 5, 2
	.2byte 0x0130

sWonderCardBgPal1: @ 0x082C3360
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal1.gbapal"

sWonderCardBgPal2: @ 0x082C3380
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal2.gbapal"

sWonderCardBgPal3: @ 0x082C33A0
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal3.gbapal"

sWonderCardBgPal4: @ 0x082C33C0
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal4.gbapal"

sWonderCardBgPal5: @ 0x082C33E0
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal5.gbapal"

sWonderCardBgPal6: @ 0x082C3400
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal6.gbapal"

sWonderCardBgPal7: @ 0x082C3420
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal7.gbapal"

sWonderCardBgPal8: @ 0x082C3440
	.incbin "build/graphics/mystery_gift/palettes/sWonderCardBgPal8.gbapal"

sWonderCardBgGfx1: @ 0x082C3460
	@ GBA LZ77: decompressed=0x380, stream=0xFC, stored=0xFC
	.incbin "build/graphics/mystery_gift/wonder_card_bg_1.4bpp.lz"
	.if (. - sWonderCardBgGfx1) > 0xFC
	.error "sWonderCardBgGfx1 exceeds its exact ROM slot"
	.endif

sWonderCardBgTilemap1: @ 0x082C355C
	@ GBA LZ77: decompressed=0x4B0, stream=0xF2, stored=0xF4
	.incbin "build/graphics/mystery_gift/wonder_card_bg_1.bin.lz"
	.if (. - sWonderCardBgTilemap1) > 0xF4
	.error "sWonderCardBgTilemap1 exceeds its exact ROM slot"
	.endif

sWonderCardBgGfx2: @ 0x082C3650
	@ GBA LZ77: decompressed=0x340, stream=0xF2, stored=0xF4
	.incbin "build/graphics/mystery_gift/wonder_card_bg_2.4bpp.lz"
	.if (. - sWonderCardBgGfx2) > 0xF4
	.error "sWonderCardBgGfx2 exceeds its exact ROM slot"
	.endif

sWonderCardBgTilemap2: @ 0x082C3744
	@ GBA LZ77: decompressed=0x4B0, stream=0xE6, stored=0xE8
	.incbin "build/graphics/mystery_gift/wonder_card_bg_2.bin.lz"
	.if (. - sWonderCardBgTilemap2) > 0xE8
	.error "sWonderCardBgTilemap2 exceeds its exact ROM slot"
	.endif

sWonderCardBgGfx3: @ 0x082C382C
	@ GBA LZ77: decompressed=0x2C0, stream=0xD3, stored=0xD4
	.incbin "build/graphics/mystery_gift/wonder_card_bg_3.4bpp.lz"
	.if (. - sWonderCardBgGfx3) > 0xD4
	.error "sWonderCardBgGfx3 exceeds its exact ROM slot"
	.endif

sWonderCardBgTilemap3: @ 0x082C3900
	@ GBA LZ77: decompressed=0x4B0, stream=0xD2, stored=0xD4
	.incbin "build/graphics/mystery_gift/wonder_card_bg_3.bin.lz"
	.if (. - sWonderCardBgTilemap3) > 0xD4
	.error "sWonderCardBgTilemap3 exceeds its exact ROM slot"
	.endif

sWonderCardBgGfx7: @ 0x082C39D4
	@ GBA LZ77: decompressed=0x780, stream=0x231, stored=0x234
	.incbin "build/graphics/mystery_gift/wonder_card_bg_7.4bpp.lz"
	.if (. - sWonderCardBgGfx7) > 0x234
	.error "sWonderCardBgGfx7 exceeds its exact ROM slot"
	.endif

sWonderCardBgTilemap7: @ 0x082C3C08
	@ GBA LZ77: decompressed=0x4B0, stream=0x145, stored=0x148
	.incbin "build/graphics/mystery_gift/wonder_card_bg_7.bin.lz"
	.if (. - sWonderCardBgTilemap7) > 0x148
	.error "sWonderCardBgTilemap7 exceeds its exact ROM slot"
	.endif

sWonderCardBgGfx8: @ 0x082C3D50
	@ GBA LZ77: decompressed=0x780, stream=0x22E, stored=0x230
	.incbin "build/graphics/mystery_gift/wonder_card_bg_8.4bpp.lz"
	.if (. - sWonderCardBgGfx8) > 0x230
	.error "sWonderCardBgGfx8 exceeds its exact ROM slot"
	.endif

sWonderCardBgTilemap8: @ 0x082C3F80
	@ GBA LZ77: decompressed=0x4B0, stream=0x145, stored=0x148
	.incbin "build/graphics/mystery_gift/wonder_card_bg_8.bin.lz"
	.if (. - sWonderCardBgTilemap8) > 0x148
	.error "sWonderCardBgTilemap8 exceeds its exact ROM slot"
	.endif

sStampShadowPal1: @ 0x082C40C8
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal1.gbapal"

sStampShadowPal2: @ 0x082C40E8
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal2.gbapal"

sStampShadowPal3: @ 0x082C4108
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal3.gbapal"

sStampShadowPal4: @ 0x082C4128
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal4.gbapal"

sStampShadowPal5: @ 0x082C4148
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal5.gbapal"

sStampShadowPal6: @ 0x082C4168
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal6.gbapal"

sStampShadowPal7: @ 0x082C4188
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal7.gbapal"

sStampShadowPal8: @ 0x082C41A8
	.incbin "build/graphics/mystery_gift/palettes/sStampShadowPal8.gbapal"

sStampShadowGfx: @ 0x082C41C8
	@ GBA LZ77: decompressed=0x100, stream=0x64, stored=0x64
	.incbin "build/graphics/mystery_gift/stamp_shadow.4bpp.lz"
	.if (. - sStampShadowGfx) > 0x64
	.error "sStampShadowGfx exceeds its exact ROM slot"
	.endif
sSpriteSheet_StampShadow:
	.4byte sStampShadowGfx
	.2byte 0x0100 @ size
	.2byte 0x8000 @ TAG_STAMP_SHADOW
sSpritePalettes_StampShadow:
	.4byte sStampShadowPal1
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
	.4byte sStampShadowPal2
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
	.4byte sStampShadowPal3
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
	.4byte sStampShadowPal4
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
	.4byte sStampShadowPal5
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
	.4byte sStampShadowPal6
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
	.4byte sStampShadowPal7
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
	.4byte sStampShadowPal8
	.2byte 0x8000 @ TAG_STAMP_SHADOW
	.2byte 0 @ padding
sSpriteTemplate_StampShadow:
	.2byte 0x8000 @ tileTag
	.2byte 0x8000 @ paletteTag
	.4byte gOamData_AffineOff_ObjNormal_32x16 @ gOamData_AffineOff_ObjNormal_32x16
	.4byte gDummySpriteAnimTable @ gDummySpriteAnimTable
	.4byte 0 @ images
	.4byte gDummySpriteAffineAnimTable @ gDummySpriteAffineAnimTable
	.4byte SpriteCallbackDummy @ SpriteCallbackDummy
sCardGraphics:
	@ bgType 0
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx1
	.4byte sWonderCardBgTilemap1
	.4byte sWonderCardBgPal1
	@ bgType 1
	.byte 0x01, 0x10, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx2
	.4byte sWonderCardBgTilemap2
	.4byte sWonderCardBgPal2
	@ bgType 2
	.byte 0x01, 0x20, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx3
	.4byte sWonderCardBgTilemap3
	.4byte sWonderCardBgPal3
	@ bgType 3
	.byte 0x01, 0x30, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx3
	.4byte sWonderCardBgTilemap3
	.4byte sWonderCardBgPal4
	@ bgType 4
	.byte 0x01, 0x40, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx3
	.4byte sWonderCardBgTilemap3
	.4byte sWonderCardBgPal5
	@ bgType 5
	.byte 0x01, 0x50, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx3
	.4byte sWonderCardBgTilemap3
	.4byte sWonderCardBgPal6
	@ bgType 6
	.byte 0x01, 0x60, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx7
	.4byte sWonderCardBgTilemap7
	.4byte sWonderCardBgPal7
	@ bgType 7
	.byte 0x01, 0x70, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderCardBgGfx8
	.4byte sWonderCardBgTilemap8
	.4byte sWonderCardBgPal8
sNews_TextColorTable:
	.byte 0, 2, 3 @ TRANSPARENT, DARK_GRAY, LIGHT_GRAY
	.byte 0, 1, 2 @ TRANSPARENT, WHITE, DARK_GRAY
	.space 2, 0 @ alignment
sNews_WindowTemplates:
	@ NEWS_WIN_TITLE
	.byte 0, 1, 0, 28, 3, 2
	.2byte 0x02AC
	@ NEWS_WIN_BODY
	.byte 2, 1, 3, 28, 20, 2
	.2byte 0x007C
sNews_ArrowsTemplate:
	@ ScrollArrowsTemplate (up/down arrows, thresholds/tags)
	.byte 0x02, 0xE8, 0x18, 0x03, 0xE8, 0x98, 0x00, 0x00, 0x02, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00

sWonderNewsPal1: @ 0x082C4334
	.incbin "build/graphics/mystery_gift/palettes/sWonderNewsPal1.gbapal"

sWonderNewsPal7: @ 0x082C4354
	.incbin "build/graphics/mystery_gift/palettes/sWonderNewsPal7.gbapal"

sWonderNewsPal8: @ 0x082C4374
	.incbin "build/graphics/mystery_gift/palettes/sWonderNewsPal8.gbapal"

sWonderNewsGfx1: @ 0x082C4394
	@ GBA LZ77: decompressed=0x1E0, stream=0x7F, stored=0x80
	.incbin "build/graphics/mystery_gift/wonder_news_1.4bpp.lz"
	.if (. - sWonderNewsGfx1) > 0x80
	.error "sWonderNewsGfx1 exceeds its exact ROM slot"
	.endif

sWonderNewsTilemap1: @ 0x082C4414
	@ GBA LZ77: decompressed=0x5A0, stream=0xDC, stored=0xDC
	.incbin "build/graphics/mystery_gift/wonder_news_1.bin.lz"
	.if (. - sWonderNewsTilemap1) > 0xDC
	.error "sWonderNewsTilemap1 exceeds its exact ROM slot"
	.endif

sWonderNewsGfx2: @ 0x082C44F0
	@ GBA LZ77: decompressed=0xA0, stream=0x2E, stored=0x30
	.incbin "build/graphics/mystery_gift/wonder_news_2.4bpp.lz"
	.if (. - sWonderNewsGfx2) > 0x30
	.error "sWonderNewsGfx2 exceeds its exact ROM slot"
	.endif

sWonderNewsTilemap2: @ 0x082C4520
	@ GBA LZ77: decompressed=0x5A0, stream=0xBF, stored=0xC0
	.incbin "build/graphics/mystery_gift/wonder_news_2.bin.lz"
	.if (. - sWonderNewsTilemap2) > 0xC0
	.error "sWonderNewsTilemap2 exceeds its exact ROM slot"
	.endif

sWonderNewsGfx3: @ 0x082C45E0
	@ GBA LZ77: decompressed=0x160, stream=0x70, stored=0x70
	.incbin "build/graphics/mystery_gift/wonder_news_3.4bpp.lz"
	.if (. - sWonderNewsGfx3) > 0x70
	.error "sWonderNewsGfx3 exceeds its exact ROM slot"
	.endif

sWonderNewsTilemap3: @ 0x082C4650
	@ GBA LZ77: decompressed=0x5A0, stream=0xC9, stored=0xCC
	.incbin "build/graphics/mystery_gift/wonder_news_3.bin.lz"
	.if (. - sWonderNewsTilemap3) > 0xCC
	.error "sWonderNewsTilemap3 exceeds its exact ROM slot"
	.endif

sWonderNewsGfx7: @ 0x082C471C
	@ GBA LZ77: decompressed=0x1E0, stream=0x90, stored=0x90
	.incbin "build/graphics/mystery_gift/wonder_news_7.4bpp.lz"
	.if (. - sWonderNewsGfx7) > 0x90
	.error "sWonderNewsGfx7 exceeds its exact ROM slot"
	.endif

sWonderNewsTilemap7: @ 0x082C47AC
	@ GBA LZ77: decompressed=0x5A0, stream=0xDC, stored=0xDC
	.incbin "build/graphics/mystery_gift/wonder_news_7.bin.lz"
	.if (. - sWonderNewsTilemap7) > 0xDC
	.error "sWonderNewsTilemap7 exceeds its exact ROM slot"
	.endif

sWonderNewsGfx8: @ 0x082C4888
	@ GBA LZ77: decompressed=0x1E0, stream=0x90, stored=0x90
	.incbin "build/graphics/mystery_gift/wonder_news_8.4bpp.lz"
	.if (. - sWonderNewsGfx8) > 0x90
	.error "sWonderNewsGfx8 exceeds its exact ROM slot"
	.endif

sWonderNewsTilemap8: @ 0x082C4918
	@ GBA LZ77: decompressed=0x5A0, stream=0xDC, stored=0xDC
	.incbin "build/graphics/mystery_gift/wonder_news_8.bin.lz"
	.if (. - sWonderNewsTilemap8) > 0xDC
	.error "sWonderNewsTilemap8 exceeds its exact ROM slot"
	.endif
sNewsGraphics:
	@ bgType 0
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx1
	.4byte sWonderNewsTilemap1
	.4byte sWonderNewsPal1
	@ bgType 1
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx2
	.4byte sWonderNewsTilemap2
	.4byte sWonderCardBgPal2
	@ bgType 2
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx3
	.4byte sWonderNewsTilemap3
	.4byte sWonderCardBgPal3
	@ bgType 3
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx3
	.4byte sWonderNewsTilemap3
	.4byte sWonderCardBgPal4
	@ bgType 4
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx3
	.4byte sWonderNewsTilemap3
	.4byte sWonderCardBgPal5
	@ bgType 5
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx3
	.4byte sWonderNewsTilemap3
	.4byte sWonderCardBgPal6
	@ bgType 6
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx7
	.4byte sWonderNewsTilemap7
	.4byte sWonderNewsPal7
	@ bgType 7
	.byte 0x01, 0x00, 0x00, 0x00 @ packed palettes + padding
	.4byte sWonderNewsGfx8
	.4byte sWonderNewsTilemap8
	.4byte sWonderNewsPal8
sDebugFile_MEventServer:
	.asciz "mevent_server.c"
sAssert_MEventSendSize:
	.asciz "size <= ME_SEND_BUF_SIZE"
	.space 3, 0 @ alignment
sAssert_MEventCmdParameterNull:
	.asciz "cmd->parameter == NULL"
	.space 1, 0 @ alignment
sAssert_MEventCmdFlagFalse:
	.asciz "cmd->flag == FALSE"
	.space 1, 0 @ alignment
sAssert_MEventCmdFlagFalseParameterNull:
	.asciz "cmd->flag == FALSE && cmd->parameter == NULL"
	.space 3, 0 @ alignment
sMEventServerMainSeqFuncs:
	.4byte common_mainseq_0
	.4byte common_mainseq_1
	.4byte common_mainseq_2
	.4byte common_mainseq_3
	.4byte common_mainseq_4
sAssert_MEventServerMainSeqInRange:
	.asciz "svr->mainseqno < NELEMS(func_tbl)"
	.space 2, 0 @ alignment
sMEventClientMainSeqFuncs:
	.4byte mainseq_0 @ Client_Init
	.4byte mainseq_1 @ Client_Done
	.4byte mainseq_2 @ Client_Recv
	.4byte mainseq_3 @ Client_Send
	.4byte mainseq_4 @ Client_Run
	.4byte mainseq_5 @ Client_Wait
	.4byte mainseq_6 @ Client_RunMysteryEventScript
	.4byte mainseq_7 @ Client_RunBufferScript
sText_CanceledReadingCard: @ 0x082C4B54
	.string "カードの　よみこみを\nキャンセル　しました{EOS}"
	.space 2, 0 @ alignment
gMysteryGiftClientScript_Init: @ 0x082C4B6C
	.4byte 2 @ CLI_RECV
	.4byte 0x10
	.4byte 4 @ CLI_COPY_RECV
	.4byte 0x0
sClientScript_SendGameData: @ 0x082C4B7C
	.4byte 8 @ CLI_LOAD_GAME_DATA
	.4byte 0x0
	.4byte 3 @ CLI_SEND_LOADED
	.4byte 0x0
	.4byte 2 @ CLI_RECV
	.4byte 0x10
	.4byte 4 @ CLI_COPY_RECV
	.4byte 0x0
sClientScript_CantAccept: @ 0x082C4B9C
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0xA
sClientScript_CommError: @ 0x082C4BAC
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0xB
sClientScript_NothingSent: @ 0x082C4BBC
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0x0
sClientScript_SaveCard: @ 0x082C4BCC
	.4byte 2 @ CLI_RECV
	.4byte 0x16
	.4byte 10 @ CLI_SAVE_CARD
	.4byte 0x0
	.4byte 2 @ CLI_RECV
	.4byte 0x19
	.4byte 17 @ CLI_SAVE_RAM_SCRIPT
	.4byte 0x0
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0x2
sClientScript_SaveNews: @ 0x082C4BFC
	.4byte 2 @ CLI_RECV
	.4byte 0x17
	.4byte 9 @ CLI_SAVE_NEWS
	.4byte 0x0
	.4byte 3 @ CLI_SEND_LOADED
	.4byte 0x0
	.4byte 2 @ CLI_RECV
	.4byte 0x10
	.4byte 4 @ CLI_COPY_RECV
	.4byte 0x0
sClientScript_HadNews: @ 0x082C4C24
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0x7
sClientScript_NewsReceived: @ 0x082C4C34
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0x3
sClientScript_AskToss: @ 0x082C4C44
	.4byte 13 @ CLI_ASK_TOSS
	.4byte 0x0
	.4byte 14 @ CLI_LOAD_TOSS_RESPONSE
	.4byte 0x0
	.4byte 3 @ CLI_SEND_LOADED
	.4byte 0x0
	.4byte 2 @ CLI_RECV
	.4byte 0x10
	.4byte 4 @ CLI_COPY_RECV
	.4byte 0x0
sClientScript_Canceled: @ 0x082C4C6C
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0x9
sClientScript_HadCard: @ 0x082C4C7C
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0x5
sClientScript_DynamicError: @ 0x082C4C8C
	.4byte 2 @ CLI_RECV
	.4byte 0x15
	.4byte 12 @ CLI_COPY_MSG
	.4byte 0x0
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0xE
sClientScript_DynamicSuccess: @ 0x082C4CAC
	.4byte 2 @ CLI_RECV
	.4byte 0x15
	.4byte 12 @ CLI_COPY_MSG
	.4byte 0x0
	.4byte 20 @ CLI_SEND_READY_END
	.4byte 0x0
	.4byte 1 @ CLI_RETURN
	.4byte 0xD
sServerScript_CantSend: @ 0x082C4CCC
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x10 @ flag / size
	.4byte sClientScript_CantAccept
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0xA @ flag / size
	.4byte 0
sServerScript_CommError: @ 0x082C4CFC
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x10 @ flag / size
	.4byte sClientScript_CommError
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0xB @ flag / size
	.4byte 0
sServerScript_ClientCanceledNews: @ 0x082C4D2C
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x10 @ flag / size
	.4byte sClientScript_Canceled
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0x9 @ flag / size
	.4byte 0
sServerScript_ClientCanceledCard: @ 0x082C4D5C
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x20 @ flag / size
	.4byte sClientScript_DynamicError
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 20 @ SVR_LOAD_MSG
	.4byte 0x16 @ flag / size
	.4byte sText_CanceledReadingCard
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0x9 @ flag / size
	.4byte 0
sServerScript_HasNews: @ 0x082C4DA4
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x10 @ flag / size
	.4byte sClientScript_HadNews
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0x7 @ flag / size
	.4byte 0
sServerScript_SendNews: @ 0x082C4DD4
	@ ANALYSIS: SEMANTIC_NUMERIC_MYSTERY_GIFT_SERVER_SCRIPT
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x28 @ flag / size
	.4byte sClientScript_SaveNews
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 14 @ SVR_LOAD_NEWS
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x13 @ flag / size
	.4byte 0
	.4byte 8 @ SVR_READ_RESPONSE
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 4 @ SVR_GOTO_IF_EQ
	.4byte 0x1 @ flag / size
	.4byte sServerScript_HasNews
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x10 @ flag / size
	.4byte sClientScript_NewsReceived
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0x3 @ flag / size
	.4byte 0
sServerScript_SendCard: @ 0x082C4E58
	@ ANALYSIS: SEMANTIC_NUMERIC_MYSTERY_GIFT_SERVER_SCRIPT
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x30 @ flag / size
	.4byte sClientScript_SaveCard
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 13 @ SVR_LOAD_CARD
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 15 @ SVR_LOAD_RAM_SCRIPT
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0x2 @ flag / size
	.4byte 0
sServerScript_TossPrompt: @ 0x082C4EB8
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x28 @ flag / size
	.4byte sClientScript_AskToss
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x13 @ flag / size
	.4byte 0
	.4byte 8 @ SVR_READ_RESPONSE
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 4 @ SVR_GOTO_IF_EQ
	.4byte 0x0 @ flag / size
	.4byte sServerScript_SendCard
	.4byte 3 @ SVR_GOTO
	.4byte 0x0 @ flag / size
	.4byte sServerScript_ClientCanceledCard
sServerScript_HasCard: @ 0x082C4F00
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x10 @ flag / size
	.4byte sClientScript_HadCard
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0x5 @ flag / size
	.4byte 0
sServerScript_NothingSent: @ 0x082C4F30
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x10 @ flag / size
	.4byte sClientScript_NothingSent
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x14 @ flag / size
	.4byte 0
	.4byte 0 @ SVR_RETURN
	.4byte 0x0 @ flag / size
	.4byte 0
gMysteryGiftServerScript_SendWonderNews: @ 0x082C4F60
	@ ANALYSIS: SEMANTIC_NUMERIC_MYSTERY_GIFT_SERVER_SCRIPT
	.4byte 27 @ SVR_COPY_SAVED_NEWS
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x20 @ flag / size
	.4byte sClientScript_SendGameData
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x11 @ flag / size
	.4byte 0
	.4byte 5 @ SVR_COPY_GAME_DATA
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 30 @ SVR_CHECK_GAME_DATA_NEWS
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 4 @ SVR_GOTO_IF_EQ
	.4byte 0x0 @ flag / size
	.4byte sServerScript_CantSend
	.4byte 3 @ SVR_GOTO
	.4byte 0x0 @ flag / size
	.4byte sServerScript_SendNews
gMysteryGiftServerScript_SendWonderCard: @ 0x082C4FC0
	@ ANALYSIS: SEMANTIC_NUMERIC_MYSTERY_GIFT_SERVER_SCRIPT
	.4byte 26 @ SVR_COPY_SAVED_CARD
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 28 @ SVR_COPY_SAVED_RAM_SCRIPT
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 18 @ SVR_LOAD_CLIENT_SCRIPT
	.4byte 0x20 @ flag / size
	.4byte sClientScript_SendGameData
	.4byte 1 @ SVR_SEND
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 2 @ SVR_RECV
	.4byte 0x11 @ flag / size
	.4byte 0
	.4byte 5 @ SVR_COPY_GAME_DATA
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 6 @ SVR_CHECK_GAME_DATA_CARD
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 4 @ SVR_GOTO_IF_EQ
	.4byte 0x0 @ flag / size
	.4byte sServerScript_CantSend
	.4byte 7 @ SVR_CHECK_EXISTING_CARD
	.4byte 0x0 @ flag / size
	.4byte 0
	.4byte 4 @ SVR_GOTO_IF_EQ
	.4byte 0x2 @ flag / size
	.4byte sServerScript_TossPrompt
	.4byte 4 @ SVR_GOTO_IF_EQ
	.4byte 0x0 @ flag / size
	.4byte sServerScript_SendCard
	.4byte 3 @ SVR_GOTO
	.4byte 0x0 @ flag / size
	.4byte sServerScript_HasCard
sDebugFile_MEventNews: @ 0x082C5050
	.asciz "menews_jisan.c"
	.byte 0 @ alignment
sMEventNewsAssertLine: @ 0x082C5060
	.4byte 48
