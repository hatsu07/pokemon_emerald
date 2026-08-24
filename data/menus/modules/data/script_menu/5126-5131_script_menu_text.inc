
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
