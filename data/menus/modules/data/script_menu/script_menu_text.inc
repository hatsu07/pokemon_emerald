.if .L__inc_fragment_select_ca4f67f68dc9 == 1
	@ src/data/script_menu.h:842 gText_OneIsland
	.globl gText_OneIsland
gText_OneIsland: @ 0x0857CB66
	.string "1のしま{EOS}"
	.if (. - gText_OneIsland) > 0x5
	.error "gText_OneIsland may not grow beyond its original slot"
	.endif
	.if (. - gText_OneIsland) < 0x5
	.space 0x5 - (. - gText_OneIsland)
	.endif

	@ src/data/script_menu.h:843 gText_TwoIsland
	.globl gText_TwoIsland
gText_TwoIsland: @ 0x0857CB6B
	.string "2のしま{EOS}"
	.if (. - gText_TwoIsland) > 0x5
	.error "gText_TwoIsland may not grow beyond its original slot"
	.endif
	.if (. - gText_TwoIsland) < 0x5
	.space 0x5 - (. - gText_TwoIsland)
	.endif

	@ src/data/script_menu.h:844 gText_ThreeIsland
	.globl gText_ThreeIsland
gText_ThreeIsland: @ 0x0857CB70
	.string "3のしま{EOS}"
	.if (. - gText_ThreeIsland) > 0x5
	.error "gText_ThreeIsland may not grow beyond its original slot"
	.endif
	.if (. - gText_ThreeIsland) < 0x5
	.space 0x5 - (. - gText_ThreeIsland)
	.endif

	@ src/data/script_menu.h:1428 script_menu_line_1428
	.globl gText_Rom_57CB75
gText_Rom_57CB75: @ 0x0857CB75
	.string "4のしま{EOS}"
	.if (. - gText_Rom_57CB75) > 0x5
	.error "gText_Rom_57CB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB75) < 0x5
	.space 0x5 - (. - gText_Rom_57CB75)
	.endif

	@ src/data/script_menu.h:1429 script_menu_line_1429
	.globl gText_Rom_57CB7A
gText_Rom_57CB7A: @ 0x0857CB7A
	.string "5のしま{EOS}"
	.if (. - gText_Rom_57CB7A) > 0x5
	.error "gText_Rom_57CB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7A) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7A)
	.endif

	@ src/data/script_menu.h:1431 script_menu_line_1431
	.globl gText_Rom_57CB7F
gText_Rom_57CB7F: @ 0x0857CB7F
	.string "7のしま{EOS}"
	.if (. - gText_Rom_57CB7F) > 0x5
	.error "gText_Rom_57CB7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7F) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7F)
	.endif

	@ src/data/script_menu.h:1430 script_menu_line_1430
	.globl gText_Rom_57CB84
gText_Rom_57CB84: @ 0x0857CB84
	.string "6のしま{EOS}"
	.if (. - gText_Rom_57CB84) > 0x5
	.error "gText_Rom_57CB84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB84) < 0x5
	.space 0x5 - (. - gText_Rom_57CB84)
	.endif
	@ analyzed canonical ROM range 0x0857CB89-0x0857CC18
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x1E, 0x13, 0x28, 0x19, 0x20, 0x11, 0xFF, 0x10, 0x06, 0x27, 0x19, 0x1A, 0x1F, 0xFF, 0x07, 0x2C
	.byte 0x19, 0x20, 0x0B, 0x07, 0xFF, 0x07, 0x3E, 0x15, 0x46, 0x0C, 0xFF, 0xA4, 0x19, 0x0C, 0x1F, 0x00
	.byte 0x20, 0x15, 0x14, 0xFF, 0xA7, 0x46, 0x2E, 0x00, 0x15, 0x15, 0x0C, 0x1F, 0xFF, 0xA8, 0x46, 0x2E
	.byte 0x00, 0x15, 0x15, 0x0C, 0x1F, 0xFF, 0xA9, 0x46, 0x2E, 0x00, 0x15, 0x15, 0x0C, 0x1F, 0xFF, 0xAA
	.byte 0x46, 0x2E, 0x00, 0x15, 0x15, 0x0C, 0x1F, 0xFF, 0x8B, 0xAE, 0x8D, 0x84, 0x5D, 0x78, 0x90, 0xAE
	.byte 0x64, 0xFF, 0x20, 0x3E, 0x19, 0x22, 0x02, 0x2B, 0xFF, 0xA6, 0x19, 0x0C, 0x1F, 0x00, 0x01, 0x07
	.byte 0x11, 0xFF, 0x05, 0x23, 0x02, 0x44, 0x19, 0x14, 0x03, 0xFF, 0x1A, 0x3E, 0x2A, 0x19, 0x0C, 0x1F
	.byte 0xFF, 0x20, 0x45, 0x28, 0x19, 0x0B, 0x2E, 0x4F, 0x20, 0x11, 0xFF, 0x20, 0x3E, 0x19, 0x0B, 0x2E
	.byte 0x4F, 0x20, 0x11, 0xFF, 0x02, 0x0E, 0x07, 0x19, 0x10, 0x16, 0xFF, 0x64, 0x7A, 0xAE, 0x65, 0xAE
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 2
	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AA80C
gText_Rom_5AA80C: @ 0x085AA80C
	.string "かった！{EOS}"
	.if (. - gText_Rom_5AA80C) > 0x5
	.error "gText_Rom_5AA80C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA80C) < 0x5
	.space 0x5 - (. - gText_Rom_5AA80C)
	.endif
	@ analyzed canonical ROM range 0x085AA811-0x085AA820
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x13FD, 0x0019, 0x1AFD, 0xFE44, 0x1F03, 0x0008, 0x1F07, 0x1527
	.globl gText_Rom_5AA821
gText_Rom_5AA821: @ 0x085AA821
	.string "かった！{EOS}"
	.if (. - gText_Rom_5AA821) > 0x5
	.error "gText_Rom_5AA821 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA821) < 0x5
	.space 0x5 - (. - gText_Rom_5AA821)
	.endif

.elseif .L__inc_fragment_select_ca4f67f68dc9 == 3
	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5AABA9
gText_Rom_5AABA9: @ 0x085AABA9
	.string "かった！{EOS}"
	.if (. - gText_Rom_5AABA9) > 0x5
	.error "gText_Rom_5AABA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABA9) < 0x5
	.space 0x5 - (. - gText_Rom_5AABA9)
	.endif
	@ analyzed canonical ROM range 0x085AABAE-0x085AABBA
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x06, 0x0C, 0x00, 0x15, 0x16, 0x23, 0x00, 0x19, 0x20, 0x0A, 0x22, 0x15
	.globl gText_Rom_5AABBB
gText_Rom_5AABBB: @ 0x085AABBB
	.string "かった！{EOS}"
	.if (. - gText_Rom_5AABBB) > 0x5
	.error "gText_Rom_5AABBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AABBB) < 0x5
	.space 0x5 - (. - gText_Rom_5AABBB)
	.endif
	@ Decoded text from ROM range: offset=0x5AABC0, size=0xF
	.string "かぜは　ねっぷうに　なった！{EOS}"

.elseif .L__inc_fragment_select_ca4f67f68dc9 == 4
	@ src/data/script_menu.h:177 script_menu_line_177 (+1 aliases)
	.globl gText_Rom_5C8E92
gText_Rom_5C8E92: @ 0x085C8E92
	.string "おとこ{EOS}"
	.if (. - gText_Rom_5C8E92) > 0x4
	.error "gText_Rom_5C8E92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E92) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E92)
	.endif

	@ src/data/script_menu.h:178 script_menu_line_178 (+1 aliases)
	.globl gText_Rom_5C8E96
gText_Rom_5C8E96: @ 0x085C8E96
	.string "おんな{EOS}"
	.if (. - gText_Rom_5C8E96) > 0x4
	.error "gText_Rom_5C8E96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E96) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E96)
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 5
	@ src/data/script_menu.h:4 script_menu_line_4
	.globl sScriptMenuText_Petalburg
sScriptMenuText_Petalburg: @ 0x085CA9FB
	.string "トウカ{EOS}"
	.if (. - sScriptMenuText_Petalburg) > 0x4
	.error "sScriptMenuText_Petalburg may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Petalburg) < 0x4
	.space 0x4 - (. - sScriptMenuText_Petalburg)
	.endif

	@ src/data/script_menu.h:5 script_menu_line_5
	.globl sScriptMenuText_Slateport
sScriptMenuText_Slateport: @ 0x085CA9FF
	.string "カイナ{EOS}"
	.if (. - sScriptMenuText_Slateport) > 0x4
	.error "sScriptMenuText_Slateport may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Slateport) < 0x4
	.space 0x4 - (. - sScriptMenuText_Slateport)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA03, size=0x8
	.string "ミシロ{EOS}"
	.string "ミナモ{EOS}"

	@ src/data/script_menu.h:81 script_menu_line_81
	.globl sScriptMenuText_Dewford
sScriptMenuText_Dewford: @ 0x085CAA0B
	.string "ムロ{EOS}"
	.if (. - sScriptMenuText_Dewford) > 0x3
	.error "sScriptMenuText_Dewford may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Dewford) < 0x3
	.space 0x3 - (. - sScriptMenuText_Dewford)
	.endif
	@ Decoded text from ROM range: offset=0x5CAA0E, size=0x1C
	.string "さんか　する{EOS}"
	.string "せつめいをきく{EOS}"
	.string "ポケモンコンテストって？{EOS}"

	@ src/data/script_menu.h:21 script_menu_line_21
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_TypesOfContests
sScriptMenuText_TypesOfContests: @ 0x085CAA2A
	.string "コンテストの しゅるい{EOS}"
	.if (. - sScriptMenuText_TypesOfContests) != 0xc
	.error "sScriptMenuText_TypesOfContests must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 6
	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Info2_Copy_Menus_5CAA9D
gText_Info2_Copy_Menus_5CAA9D: @ 0x085CAA9D
	.string "せつめい{EOS}"
	.if (. - gText_Info2_Copy_Menus_5CAA9D) > 0x5
	.error "gText_Info2_Copy_Menus_5CAA9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Info2_Copy_Menus_5CAA9D) < 0x5
	.space 0x5 - (. - gText_Info2_Copy_Menus_5CAA9D)
	.endif

	@ src/data/script_menu.h:65 script_menu_line_65
	.globl sScriptMenuText_Mach
sScriptMenuText_Mach: @ 0x085CAAA2
	.string "マッハ{EOS}"
	.if (. - sScriptMenuText_Mach) > 0x4
	.error "sScriptMenuText_Mach may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Mach) < 0x4
	.space 0x4 - (. - sScriptMenuText_Mach)
	.endif

	@ src/data/script_menu.h:66 script_menu_line_66
	.globl sScriptMenuText_Acro
sScriptMenuText_Acro: @ 0x085CAAA6
	.string "ダート{EOS}"
	.if (. - sScriptMenuText_Acro) > 0x4
	.error "sScriptMenuText_Acro may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Acro) < 0x4
	.space 0x4 - (. - sScriptMenuText_Acro)
	.endif
	@ Decoded text from ROM range: offset=0x5CAAAA, size=0x6
	.string "どく{EOS}"
	.string "まひ{EOS}"

.elseif .L__inc_fragment_select_ca4f67f68dc9 == 7

	@ asm/dodrio_berry_picking.s:11294 sub_08029D28
	.globl sScriptMenuText_Yes
sScriptMenuText_Yes: @ 0x085CAAD8
	.string "はい{EOS}"
	.if (. - sScriptMenuText_Yes) > 0x3
	.error "sScriptMenuText_Yes may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Yes) < 0x3
	.space 0x3 - (. - sScriptMenuText_Yes)
	.endif

	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl sScriptMenuText_No
sScriptMenuText_No: @ 0x085CAADB
	.string "いいえ{EOS}"
	.if (. - sScriptMenuText_No) > 0x4
	.error "sScriptMenuText_No may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_No) < 0x4
	.space 0x4 - (. - sScriptMenuText_No)
	.endif

	@ src/data/script_menu.h:9 gText_Info2 (+3 aliases)
	.globl gText_Info2_Copy_Menus_5CAADF
gText_Info2_Copy_Menus_5CAADF: @ 0x085CAADF
	.string "せつめい{EOS}"
	.if (. - gText_Info2_Copy_Menus_5CAADF) > 0x5
	.error "gText_Info2_Copy_Menus_5CAADF may not grow beyond its original slot"
	.endif
	.if (. - gText_Info2_Copy_Menus_5CAADF) < 0x5
	.space 0x5 - (. - gText_Info2_Copy_Menus_5CAADF)
	.endif

	@ src/data/script_menu.h:500 script_menu_line_500 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SingleBattle
sScriptMenuText_SingleBattle: @ 0x085CAAE4
	.string "シングルバトル{EOS}"
	.if (. - sScriptMenuText_SingleBattle) != 0x8
	.error "sScriptMenuText_SingleBattle must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 8

	@ src/battle_debug.c:431 battle_debug_line_431 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_DoubleBattle
sScriptMenuText_DoubleBattle: @ 0x085CAAEC
	.string "ダブルバトル{EOS}"
	.if (. - sScriptMenuText_DoubleBattle) != 0x7
	.error "sScriptMenuText_DoubleBattle must retain its original byte length"
	.endif

	@ src/data/script_menu.h:502 script_menu_line_502 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_MultiBattle
sScriptMenuText_MultiBattle: @ 0x085CAAF3
	.string "マルチバトル{EOS}"
	.if (. - sScriptMenuText_MultiBattle) != 0x7
	.error "sScriptMenuText_MultiBattle must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x5CAAFA, size=0x13
	.string "ハギ{EOS}"
	.string "ちょうせんする{EOS}"
	.string "せつめいをきく{EOS}"

	@ src/strings.c:468 gText_Lv50
	.globl sScriptMenuText_Lv50
sScriptMenuText_Lv50: @ 0x085CAB0D
	.string "レベル50{EOS}"
	.if (. - sScriptMenuText_Lv50) > 0x6
	.error "sScriptMenuText_Lv50 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Lv50) < 0x6
	.space 0x6 - (. - sScriptMenuText_Lv50)
	.endif

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_OpenLevel
sScriptMenuText_OpenLevel: @ 0x085CAB13
	.string "オープンレベル{EOS}"
	.if (. - sScriptMenuText_OpenLevel) != 0x8
	.error "sScriptMenuText_OpenLevel must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x5CAB1B, size=0x30
	.string "おいしいみず　200円{EOS}"
	.string "サイコソーダ　300円{EOS}"
	.string "ミックスオレ　350円{EOS}"
	.string "はしりかた{EOS}"
	.string "まがるコツ{EOS}"

	@ src/data/script_menu.h:229 script_menu_line_229
	.globl sScriptMenuText_SandySlopes
sScriptMenuText_SandySlopes: @ 0x085CAB4B
	.string "すなのさか{EOS}"
	.if (. - sScriptMenuText_SandySlopes) > 0x6
	.error "sScriptMenuText_SandySlopes may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_SandySlopes) < 0x6
	.space 0x6 - (. - sScriptMenuText_SandySlopes)
	.endif

	@ src/data/script_menu.h:235 script_menu_line_235
	.globl sScriptMenuText_Wheelies
sScriptMenuText_Wheelies: @ 0x085CAB51
	.string "ウイリー{EOS}"
	.if (. - sScriptMenuText_Wheelies) > 0x5
	.error "sScriptMenuText_Wheelies may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Wheelies) < 0x5
	.space 0x5 - (. - sScriptMenuText_Wheelies)
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 9
	@ src/main_menu.c:489 main_menu_line_489
	.globl sScriptMenuText_BunnyHops
sScriptMenuText_BunnyHops: @ 0x085CAB56
	.string "ダニエル{EOS}"
	.if (. - sScriptMenuText_BunnyHops) > 0x5
	.error "sScriptMenuText_BunnyHops may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BunnyHops) < 0x5
	.space 0x5 - (. - sScriptMenuText_BunnyHops)
	.endif
	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl sScriptMenuText_Jump
sScriptMenuText_Jump: @ 0x085CAB5B
	.string "ジャンプ{EOS}"
	.if (. - sScriptMenuText_Jump) > 0x5
	.error "sScriptMenuText_Jump may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Jump) < 0x5
	.space 0x5 - (. - sScriptMenuText_Jump)
	.endif
	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl sScriptMenuText_Satisfied
sScriptMenuText_Satisfied: @ 0x085CAB60
	.string "まんぞく{EOS}"
	.if (. - sScriptMenuText_Satisfied) > 0x5
	.error "sScriptMenuText_Satisfied may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Satisfied) < 0x5
	.space 0x5 - (. - sScriptMenuText_Satisfied)
	.endif
	@ src/data/script_menu.h:244 script_menu_line_244
	.globl sScriptMenuText_Dissatisfied
sScriptMenuText_Dissatisfied: @ 0x085CAB65
	.string "ふまん{EOS}"
	.if (. - sScriptMenuText_Dissatisfied) > 0x4
	.error "sScriptMenuText_Dissatisfied may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Dissatisfied) < 0x4
	.space 0x4 - (. - sScriptMenuText_Dissatisfied)
	.endif

	@ src/data/script_menu.h:249 script_menu_line_249
	.globl sScriptMenuText_DeepSeaTooth
sScriptMenuText_DeepSeaTooth: @ 0x085CAB69
	.string "しんかいのキバ{EOS}"
	.if (. - sScriptMenuText_DeepSeaTooth) > 0x8
	.error "sScriptMenuText_DeepSeaTooth may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_DeepSeaTooth) < 0x8
	.space 0x8 - (. - sScriptMenuText_DeepSeaTooth)
	.endif

	@ src/data/script_menu.h:250 script_menu_line_250
	.globl sScriptMenuText_DeepSeaScale
sScriptMenuText_DeepSeaScale: @ 0x085CAB71
	.string "しんかいのウロコ{EOS}"
	.if (. - sScriptMenuText_DeepSeaScale) > 0x9
	.error "sScriptMenuText_DeepSeaScale may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_DeepSeaScale) < 0x9
	.space 0x9 - (. - sScriptMenuText_DeepSeaScale)
	.endif

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl sScriptMenuText_BlueFlute2
sScriptMenuText_BlueFlute2: @ 0x085CAB7A
	.string "あおいビードロ{EOS}"
	.if (. - sScriptMenuText_BlueFlute2) > 0x8
	.error "sScriptMenuText_BlueFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BlueFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_BlueFlute2)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl sScriptMenuText_YellowFlute2
sScriptMenuText_YellowFlute2: @ 0x085CAB82
	.string "きいろビードロ{EOS}"
	.if (. - sScriptMenuText_YellowFlute2) > 0x8
	.error "sScriptMenuText_YellowFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_YellowFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_YellowFlute2)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl sScriptMenuText_RedFlute2
sScriptMenuText_RedFlute2: @ 0x085CAB8A
	.string "あかいビードロ{EOS}"
	.if (. - sScriptMenuText_RedFlute2) > 0x8
	.error "sScriptMenuText_RedFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_RedFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_RedFlute2)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl sScriptMenuText_WhiteFlute2
sScriptMenuText_WhiteFlute2: @ 0x085CAB92
	.string "しろいビードロ{EOS}"
	.if (. - sScriptMenuText_WhiteFlute2) > 0x8
	.error "sScriptMenuText_WhiteFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_WhiteFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_WhiteFlute2)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl sScriptMenuText_BlackFlute2
sScriptMenuText_BlackFlute2: @ 0x085CAB9A
	.string "くろいビードロ{EOS}"
	.if (. - sScriptMenuText_BlackFlute2) > 0x8
	.error "sScriptMenuText_BlackFlute2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BlackFlute2) < 0x8
	.space 0x8 - (. - sScriptMenuText_BlackFlute2)
	.endif
	@ Decoded text from ROM range: offset=0x5CABA2, size=0x7
	.string "ガラスのいす{EOS}"

	@ src/data/script_menu.h:262 script_menu_line_262
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_GlassDesk
sScriptMenuText_GlassDesk: @ 0x085CABA9
	.string "ガラスのつくえ{EOS}"
	.if (. - sScriptMenuText_GlassDesk) != 0x8
	.error "sScriptMenuText_GlassDesk must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 10
	@ Decoded text from ROM range: offset=0x5CABB1, size=0x4F
	.string "キモリドール　　　1000まい{EOS}"
	.string "アチャモドール　　1000まい{EOS}"
	.string "ミズゴロウドール　1000まい{EOS}"
	.string "　50まい　　1000円{EOS}"
	.string "500まい　10000円{EOS}"
	.string "ばつぐん{EOS}"

	@ src/data/easy_chat/easy_chat_group_speech.h:10 easy_chat_group_speech_line_10
	.globl sScriptMenuText_NotSoGood
sScriptMenuText_NotSoGood: @ 0x085CAC00
	.string "あんまり{EOS}"
	.if (. - sScriptMenuText_NotSoGood) > 0x5
	.error "sScriptMenuText_NotSoGood may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_NotSoGood) < 0x5
	.space 0x5 - (. - sScriptMenuText_NotSoGood)
	.endif
	@ src/data/script_menu.h:335 gText_RedShard
	.globl sScriptMenuText_RedShard
sScriptMenuText_RedShard: @ 0x085CAC05
	.string "あかいかけら{EOS}"
	.if (. - sScriptMenuText_RedShard) > 0x7
	.error "sScriptMenuText_RedShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_RedShard) < 0x7
	.space 0x7 - (. - sScriptMenuText_RedShard)
	.endif

	@ src/data/script_menu.h:336 gText_YellowShard
	.globl sScriptMenuText_YellowShard
sScriptMenuText_YellowShard: @ 0x085CAC0C
	.string "きいろいかけら{EOS}"
	.if (. - sScriptMenuText_YellowShard) > 0x8
	.error "sScriptMenuText_YellowShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_YellowShard) < 0x8
	.space 0x8 - (. - sScriptMenuText_YellowShard)
	.endif

	@ src/data/script_menu.h:337 gText_BlueShard
	.globl sScriptMenuText_BlueShard
sScriptMenuText_BlueShard: @ 0x085CAC14
	.string "あおいかけら{EOS}"
	.if (. - sScriptMenuText_BlueShard) > 0x7
	.error "sScriptMenuText_BlueShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BlueShard) < 0x7
	.space 0x7 - (. - sScriptMenuText_BlueShard)
	.endif

	@ src/data/script_menu.h:338 gText_GreenShard
	.globl sScriptMenuText_GreenShard
sScriptMenuText_GreenShard: @ 0x085CAC1B
	.string "みどりのかけら{EOS}"
	.if (. - sScriptMenuText_GreenShard) > 0x8
	.error "sScriptMenuText_GreenShard may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_GreenShard) < 0x8
	.space 0x8 - (. - sScriptMenuText_GreenShard)
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 11
	@ src/data/script_menu.h:549 script_menu_line_549
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_NormalRank
sScriptMenuText_NormalRank: @ 0x085CAD33
	.string "ノーマルランク{EOS}"
	.if (. - sScriptMenuText_NormalRank) != 0x8
	.error "sScriptMenuText_NormalRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:550 script_menu_line_550
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SuperRank
sScriptMenuText_SuperRank: @ 0x085CAD3B
	.string "スーパーランク{EOS}"
	.if (. - sScriptMenuText_SuperRank) != 0x8
	.error "sScriptMenuText_SuperRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:551 script_menu_line_551
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_HyperRank
sScriptMenuText_HyperRank: @ 0x085CAD43
	.string "ハイパーランク{EOS}"
	.if (. - sScriptMenuText_HyperRank) != 0x8
	.error "sScriptMenuText_HyperRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:552 script_menu_line_552
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_MasterRank
sScriptMenuText_MasterRank: @ 0x085CAD4B
	.string "マスターランク{EOS}"
	.if (. - sScriptMenuText_MasterRank) != 0x8
	.error "sScriptMenuText_MasterRank must retain its original byte length"
	.endif

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gStdString_Single
gStdString_Single: @ 0x085CAD53
	.string "シングル{EOS}"
	.if (. - gStdString_Single) > 0x5
	.error "gStdString_Single may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Single) < 0x5
	.space 0x5 - (. - gStdString_Single)
	.endif

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gStdString_Double
gStdString_Double: @ 0x085CAD58
	.string "ダブル{EOS}"
	.if (. - gStdString_Double) > 0x4
	.error "gStdString_Double may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Double) < 0x4
	.space 0x4 - (. - gStdString_Double)
	.endif

	@ src/data/script_menu.h:1332 script_menu_line_1332 (+1 aliases)
	.globl gStdString_Multi
gStdString_Multi: @ 0x085CAD5C
	.string "マルチ{EOS}"
	.if (. - gStdString_Multi) > 0x4
	.error "gStdString_Multi may not grow beyond its original slot"
	.endif
	.if (. - gStdString_Multi) < 0x4
	.space 0x4 - (. - gStdString_Multi)
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 12
	@ src/data/script_menu.h:593 script_menu_line_593
	.globl sScriptMenuText_10BP
sScriptMenuText_10BP: @ 0x085CADD9
	.string "10BP{EOS}"
	.if (. - sScriptMenuText_10BP) > 0x5
	.error "sScriptMenuText_10BP may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_10BP) < 0x5
	.space 0x5 - (. - sScriptMenuText_10BP)
	.endif

	@ src/data/script_menu.h:594 script_menu_line_594
	.globl sScriptMenuText_15BP
sScriptMenuText_15BP: @ 0x085CADDE
	.string "15BP{EOS}"
	.if (. - sScriptMenuText_15BP) > 0x5
	.error "sScriptMenuText_15BP may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_15BP) < 0x5
	.space 0x5 - (. - sScriptMenuText_15BP)
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 13
	@ src/data/script_menu.h:770 script_menu_line_770
	.globl gText_Rom_5CAE35
gText_Rom_5CAE35: @ 0x085CAE35
	.string "かった！{EOS}"
	.if (. - gText_Rom_5CAE35) > 0x5
	.error "gText_Rom_5CAE35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE35) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE35)
	.endif
	@ analyzed canonical ROM range 0x085CAE3A-0x085CAE3E
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x0C, 0x36, 0x03, 0x48, 0x16
	.globl gText_Rom_5CAE3F
gText_Rom_5CAE3F: @ 0x085CAE3F
	.string "まけた！{EOS}"
	.if (. - gText_Rom_5CAE3F) > 0x5
	.error "gText_Rom_5CAE3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE3F) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE3F)
	.endif
	@ analyzed canonical ROM range 0x085CAE44-0x085CAE4D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x05, 0x0C, 0x04, 0x15, 0x02, 0xFF, 0x64, 0x7A, 0xAE, 0x95
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 14
	@ src/data/easy_chat/easy_chat_group_trainer.h:46 easy_chat_group_trainer_line_46
	.globl gText_Rom_5CAE4E
gText_Rom_5CAE4E: @ 0x085CAE4E
	.string "センター{EOS}"
	.if (. - gText_Rom_5CAE4E) > 0x5
	.error "gText_Rom_5CAE4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE4E) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE4E)
	.endif

	@ src/data/script_menu.h:480 gText_Colosseum
	.globl sScriptMenuText_Colosseum
sScriptMenuText_Colosseum: @ 0x085CAE53
	.string "コロシアム{EOS}"
	.if (. - sScriptMenuText_Colosseum) > 0x6
	.error "sScriptMenuText_Colosseum may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Colosseum) < 0x6
	.space 0x6 - (. - sScriptMenuText_Colosseum)
	.endif
	@ Decoded text from ROM range: offset=0x5CAE59, size=0x9
	.string "レコードコーナー{EOS}"

	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BerryCrush3
sScriptMenuText_BerryCrush3: @ 0x085CAE62
	.string "きのみクラッシュ{EOS}"
	.if (. - sScriptMenuText_BerryCrush3) != 0x9
	.error "sScriptMenuText_BerryCrush3 must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 15
	@ Decoded text from ROM range: offset=0x5CAE9D, size=0x7
	.string "2つのコース{EOS}"
	@ src/strings.c:468 gText_Lv50
	.globl sScriptMenuText_Lv50_3
sScriptMenuText_Lv50_3: @ 0x085CAEA4
	.string "レベル50{EOS}"
	.if (. - sScriptMenuText_Lv50_3) > 0x6
	.error "sScriptMenuText_Lv50_3 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Lv50_3) < 0x6
	.space 0x6 - (. - sScriptMenuText_Lv50_3)
	.endif
	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_OpenLevel2
sScriptMenuText_OpenLevel2: @ 0x085CAEAA
	.string "オープンレベル{EOS}"
	.if (. - sScriptMenuText_OpenLevel2) != 0x8
	.error "sScriptMenuText_OpenLevel2 must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5CAEB2, size=0x11
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x19, 0x0C, 0x35, 0x29, 0x02, 0x14, 0x06, 0x3E, 0xFF, 0x23, 0x10, 0x0E
	.byte 0x29
	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAEC3
gText_Rom_5CAEC3: @ 0x085CAEC3
	.string "どうぐ{EOS}"
	.if (. - gText_Rom_5CAEC3) > 0x4
	.error "gText_Rom_5CAEC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEC3) < 0x4
	.space 0x4 - (. - gText_Rom_5CAEC3)
	.endif
	@ src/data/script_menu.h:652 script_menu_line_652
	.globl sScriptMenuText_Symbols2
sScriptMenuText_Symbols2: @ 0x085CAEC7
	.string "シンボル{EOS}"
	.if (. - sScriptMenuText_Symbols2) > 0x5
	.error "sScriptMenuText_Symbols2 may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Symbols2) < 0x5
	.space 0x5 - (. - sScriptMenuText_Symbols2)
	.endif
	@ analyzed canonical ROM range 0x085CAECC-0x085CAED0
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x10, 0x02, 0x0E, 0x2E, 0x19
	.globl gText_Rom_5CAED1
gText_Rom_5CAED1: @ 0x085CAED1
	.string "きろく{EOS}"
	.if (. - gText_Rom_5CAED1) > 0x4
	.error "gText_Rom_5CAED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAED1) < 0x4
	.space 0x4 - (. - gText_Rom_5CAED1)
	.endif

	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattlePts
sScriptMenuText_BattlePts: @ 0x085CAED5
	.string "バトルポイント{EOS}"
	.if (. - sScriptMenuText_BattlePts) != 0x8
	.error "sScriptMenuText_BattlePts must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 16
	@ ANALYSIS: RAW_RANGE offset=0x5CAEDD, size=0xD
	.byte 0x60, 0x7C, 0xAE, 0x16, 0x12, 0x02, 0x13, 0xFF, 0x12, 0x2A, 0x13, 0x02, 0x08

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CAEEA
gText_Rom_5CAEEA: @ 0x085CAEEA
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5CAEEA) > 0x5
	.error "gText_Rom_5CAEEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEEA) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEEA)
	.endif

	@ src/data/script_menu.h:676 script_menu_line_676
	.globl sScriptMenuText_BattleSalon
sScriptMenuText_BattleSalon: @ 0x085CAEEF
	.string "バトルサロン{EOS}"
	.if (. - sScriptMenuText_BattleSalon) > 0x7
	.error "sScriptMenuText_BattleSalon may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BattleSalon) < 0x7
	.space 0x7 - (. - sScriptMenuText_BattleSalon)
	.endif
	@ analyzed canonical ROM range 0x085CAEF6-0x085CAEF9
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x12, 0x03, 0x0C, 0x2E
	.globl gText_Rom_5CAEFA
gText_Rom_5CAEFA: @ 0x085CAEFA
	.string "マルチ{EOS}"
	.if (. - gText_Rom_5CAEFA) > 0x4
	.error "gText_Rom_5CAEFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEFA) < 0x4
	.space 0x4 - (. - gText_Rom_5CAEFA)
	.endif
	@ analyzed canonical ROM range 0x085CAEFE-0x085CAF38
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x96, 0x64, 0x79, 0x44, 0x19, 0x00, 0x11, 0x35, 0x03, 0x02, 0xFF, 0x1A, 0x2E, 0x13, 0x02, 0xB3
	.byte 0x0A, 0x0A, 0x2B, 0xB4, 0xFF, 0x1A, 0x2E, 0x13, 0x02, 0xB3, 0x2C, 0x3C, 0xB4, 0xFF, 0x1A, 0x2E
	.byte 0x13, 0x02, 0xB3, 0x06, 0x27, 0x41, 0xB4, 0xFF, 0x08, 0x20, 0x01, 0x2C, 0x0E, 0xFF, 0x64, 0xAE
	.byte 0x65, 0x72, 0x7E, 0x64, 0x1B, 0x36, 0x03, 0xFF, 0x91, 0x98, 0x79
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 17

	@ src/data/script_menu.h:731 gText_GoOn
	.globl sScriptMenuText_GoOn
sScriptMenuText_GoOn: @ 0x085CAFFA
	.string "つづける{EOS}"
	.if (. - sScriptMenuText_GoOn) > 0x5
	.error "sScriptMenuText_GoOn may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_GoOn) < 0x5
	.space 0x5 - (. - sScriptMenuText_GoOn)
	.endif
	@ Decoded text from ROM range: offset=0x5CAFFF, size=0x6
	.string "きろくする{EOS}"

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl sScriptMenuText_Rest
sScriptMenuText_Rest: @ 0x085CB005
	.string "やすむ{EOS}"
	.if (. - sScriptMenuText_Rest) > 0x4
	.error "sScriptMenuText_Rest may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Rest) < 0x4
	.space 0x4 - (. - sScriptMenuText_Rest)
	.endif

	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl sScriptMenuText_Retire
sScriptMenuText_Retire: @ 0x085CB009
	.string "リタイア{EOS}"
	.if (. - sScriptMenuText_Retire) > 0x5
	.error "sScriptMenuText_Retire may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Retire) < 0x5
	.space 0x5 - (. - sScriptMenuText_Retire)
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 18
	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gFieldSpecialsMenuText_Block01_Item00
gFieldSpecialsMenuText_Block01_Item00: @ 0x085CB040
	.string "あおいビードロ{EOS}"
	.if (. - gFieldSpecialsMenuText_Block01_Item00) > 0x8
	.error "gFieldSpecialsMenuText_Block01_Item00 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block01_Item00) < 0x8
	.space 0x8 - (. - gFieldSpecialsMenuText_Block01_Item00)
	.endif

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gFieldSpecialsMenuText_Block01_Item01
gFieldSpecialsMenuText_Block01_Item01: @ 0x085CB048
	.string "きいろビードロ{EOS}"
	.if (. - gFieldSpecialsMenuText_Block01_Item01) > 0x8
	.error "gFieldSpecialsMenuText_Block01_Item01 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block01_Item01) < 0x8
	.space 0x8 - (. - gFieldSpecialsMenuText_Block01_Item01)
	.endif

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gFieldSpecialsMenuText_Block01_Item02
gFieldSpecialsMenuText_Block01_Item02: @ 0x085CB050
	.string "あかいビードロ{EOS}"
	.if (. - gFieldSpecialsMenuText_Block01_Item02) > 0x8
	.error "gFieldSpecialsMenuText_Block01_Item02 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block01_Item02) < 0x8
	.space 0x8 - (. - gFieldSpecialsMenuText_Block01_Item02)
	.endif

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gFieldSpecialsMenuText_Block01_Item03
gFieldSpecialsMenuText_Block01_Item03: @ 0x085CB058
	.string "しろいビードロ{EOS}"
	.if (. - gFieldSpecialsMenuText_Block01_Item03) > 0x8
	.error "gFieldSpecialsMenuText_Block01_Item03 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block01_Item03) < 0x8
	.space 0x8 - (. - gFieldSpecialsMenuText_Block01_Item03)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gFieldSpecialsMenuText_Block01_Item04
gFieldSpecialsMenuText_Block01_Item04: @ 0x085CB060
	.string "くろいビードロ{EOS}"
	.if (. - gFieldSpecialsMenuText_Block01_Item04) > 0x8
	.error "gFieldSpecialsMenuText_Block01_Item04 may not grow beyond its original slot"
	.endif
	.if (. - gFieldSpecialsMenuText_Block01_Item04) < 0x8
	.space 0x8 - (. - gFieldSpecialsMenuText_Block01_Item04)
	.endif
.elseif .L__inc_fragment_select_ca4f67f68dc9 == 19
	@ src/data/script_menu.h:958 script_menu_line_958 (+1 aliases)
	.globl gText_Rom_5FB902
gText_Rom_5FB902: @ 0x085FB902
	.string "2F{EOS}"
	.if (. - gText_Rom_5FB902) > 0x3
	.error "gText_Rom_5FB902 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB902) < 0x3
	.space 0x3 - (. - gText_Rom_5FB902)
	.endif

	@ src/data/script_menu.h:957 script_menu_line_957 (+1 aliases)
	.globl gText_Rom_5FB905
gText_Rom_5FB905: @ 0x085FB905
	.string "3F{EOS}"
	.if (. - gText_Rom_5FB905) > 0x3
	.error "gText_Rom_5FB905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5FB905) < 0x3
	.space 0x3 - (. - gText_Rom_5FB905)
	.endif
	@ analyzed canonical ROM range 0x085FB908-0x085FB90B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xA5, 0xC0, 0xFF, 0x00
.endif
