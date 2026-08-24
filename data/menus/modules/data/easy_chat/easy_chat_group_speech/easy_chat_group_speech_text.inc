	@ src/strings.c:489 gText_MultiLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MultiLink
gText_MultiLink: @ 0x085CAD60
	.string "つうしん マルチ{EOS}"
	.if (. - gText_MultiLink) != 0x9
	.error "gText_MultiLink must retain its original byte length"
	.endif
	@ src/data/script_menu.h:558 script_menu_line_558 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_BattleBag
sScriptMenuText_BattleBag: @ 0x085CAD69
	.string "バトルバッグ{EOS}"
	.if (. - sScriptMenuText_BattleBag) != 0x7
	.error "sScriptMenuText_BattleBag must retain its original byte length"
	.endif
	@ ANALYSIS: RAW_RANGE offset=0x5CAD70, size=0x4
	.byte 0x23, 0x10, 0x0E, 0x10
	@ src/data/easy_chat/easy_chat_group_lifestyle.h:178 easy_chat_group_lifestyle_line_178 (+1 aliases)
	.globl gText_Rom_5CAD74
gText_Rom_5CAD74: @ 0x085CAD74
	.string "どうぐ{EOS}"
	.if (. - gText_Rom_5CAD74) > 0x4
	.error "gText_Rom_5CAD74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD74) < 0x4
	.space 0x4 - (. - gText_Rom_5CAD74)
	.endif
	@ src/data/script_menu.h:565 script_menu_line_565
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_LinkContest
sScriptMenuText_LinkContest: @ 0x085CAD78
	.string "つうしんコンテスト{EOS}"
	.if (. - sScriptMenuText_LinkContest) != 0xa
	.error "sScriptMenuText_LinkContest must retain its original byte length"
	.endif
	@ Charmap text. The final prefix intentionally has no terminator:
	@ it shares the following gText_Rom_5CADA1 = "モード$" suffix.
	.string "エメラルドモードについて{EOS}"
	.string "グローバルモードについて{EOS}"
	.string "エメラルド"
	@ src/data/easy_chat/easy_chat_group_speech.h:322 easy_chat_group_speech_line_322
	.globl gText_Rom_5CADA1
gText_Rom_5CADA1: @ 0x085CADA1
	.string "モード{EOS}"
	.if (. - gText_Rom_5CADA1) > 0x4
	.error "gText_Rom_5CADA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADA1) < 0x4
	.space 0x4 - (. - gText_Rom_5CADA1)
	.endif
	@ Unterminated prefix sharing the following gText_Rom_5CADAA = "モード$" suffix.
	.string "グローバル"
	.globl gText_Rom_5CADAA
gText_Rom_5CADAA: @ 0x085CADAA
	.string "モード{EOS}"
	.if (. - gText_Rom_5CADAA) > 0x4
	.error "gText_Rom_5CADAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADAA) < 0x4
	.space 0x4 - (. - gText_Rom_5CADAA)
	.endif
