	.globl gText_Rom_5CAE99
	.set gText_Rom_5CAE99, sScriptMenuText_JoinGroup + 0x5
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
	.globl gText_Rom_5CAEAE
	.set gText_Rom_5CAEAE, sScriptMenuText_OpenLevel2 + 0x4
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
