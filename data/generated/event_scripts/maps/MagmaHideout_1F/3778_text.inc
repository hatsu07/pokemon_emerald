	@ field-script:0x21C07D FieldScriptText_21C0D0
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21C0D0
gText_Rom_21C0D0: @ 0x0821C0D0
	.string "めを　さました　レックウザは\nどこかへ　とんで　いって　しまった……"
	.byte EOS
	.if (. - gText_Rom_21C0D0) != 0x23
	.error "gText_Rom_21C0D0 must retain its original byte length"
	.endif
	@ Embedded ROM bytes: file offset 0x21C0F3, size 0x3A
	.byte 0x03, 0xF9, 0xC0, 0x21, 0x08, 0x00, 0x16, 0xBD, 0x40, 0x00, 0x00, 0x02, 0x5C, 0x00, 0xCC, 0x02
	.byte 0x00, 0x00
	.4byte MagmaHideout_1F_Text_Grunt1Intro
	.4byte MagmaHideout_1F_Text_Grunt1Defeat
	.byte 0x0F, 0x00
	.4byte MagmaHideout_1F_Text_Grunt1PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xCD, 0x02, 0x00, 0x00, 0xD5, 0xC1, 0x21, 0x08, 0x2E, 0xC2, 0x21
	.byte 0x08, 0x0F, 0x00, 0x3E, 0xC2, 0x21, 0x08, 0x09, 0x06, 0x02
	@ data/maps/MagmaHideout_1F/scripts.inc:19 MagmaHideout_1F_Text_Grunt1Intro (+1 aliases)
	.globl MagmaHideout_1F_Text_Grunt1Intro
MagmaHideout_1F_Text_Grunt1Intro: @ 0x0821C12D
	.string "マグマだんは ごうれいが かかったとき\nはやく せいれつした じゅんばんで\lじゅうような ばしょの\lけいびを まかせて もらえるんだぜ!\pオレが こんな すみっこに いるのは\nちこく ばっかり してるからさ!"
	.byte EOS
	.if (. - MagmaHideout_1F_Text_Grunt1Intro) > 0x69
	.error "MagmaHideout_1F_Text_Grunt1Intro may not grow beyond its original slot"
	.endif
	.if (. - MagmaHideout_1F_Text_Grunt1Intro) < 0x69
	.space 0x69 - (. - MagmaHideout_1F_Text_Grunt1Intro)
	.endif
