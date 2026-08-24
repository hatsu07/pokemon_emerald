	@ data/maps/AquaHideout_B1F/scripts.inc:109 AquaHideout_B1F_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_217E0C
gText_Rom_217E0C: @ 0x08217E0C
	.string "アジトの ひみつを しりたけりゃ\nおれを たおす ことだな!{EOS}"
	.if (. - gText_Rom_217E0C) > 0x1f
	.error "gText_Rom_217E0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E0C) < 0x1f
	.space 0x1f - (. - gText_Rom_217E0C)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:112 AquaHideout_B1F_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_217E2B
gText_Rom_217E2B: @ 0x08217E2B
	.string "ぜんぜん かてません……!{EOS}"
	.if (. - gText_Rom_217E2B) > 0xe
	.error "gText_Rom_217E2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E2B) < 0xe
	.space 0xe - (. - gText_Rom_217E2B)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:115 AquaHideout_B1F_Text_Grunt2PostBattle
	.globl gText_Rom_217E39
gText_Rom_217E39: @ 0x08217E39
	.string "アジトの ひみつ?\pそれはな…… いちばん おくに\nせんすいていが あるって ことよ!\pだが いまごろは いひひひ……!{EOS}"
	.if (. - gText_Rom_217E39) > 0x3d
	.error "gText_Rom_217E39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E39) < 0x3d
	.space 0x3d - (. - gText_Rom_217E39)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:118 AquaHideout_B1F_Text_Grunt3Intro (+1 aliases)
	.globl gText_Rom_217E76
gText_Rom_217E76: @ 0x08217E76
	.string "ねんりょうの ほきゅう オッケイ!\nおやつも ほきゅう オッケイ!\pあとは ジャマものを ぶっとばす だけ!{EOS}"
	.if (. - gText_Rom_217E76) > 0x37
	.error "gText_Rom_217E76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217E76) < 0x37
	.space 0x37 - (. - gText_Rom_217E76)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:121 AquaHideout_B1F_Text_Grunt3Defeat (+1 aliases)
	.globl gText_Rom_217EAD
gText_Rom_217EAD: @ 0x08217EAD
	.string "こっぴどく やられたーっ!{EOS}"
	.if (. - gText_Rom_217EAD) > 0xe
	.error "gText_Rom_217EAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217EAD) < 0xe
	.space 0xe - (. - gText_Rom_217EAD)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:124 AquaHideout_B1F_Text_Grunt3PostBattle
	.globl gText_Rom_217EBB
gText_Rom_217EBB: @ 0x08217EBB
	.string "ふん! これで いいんだ\pおまえの ジャマをする というのが\nおれの にんむ だったのさ{EOS}"
	.if (. - gText_Rom_217EBB) > 0x2d
	.error "gText_Rom_217EBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217EBB) < 0x2d
	.space 0x2d - (. - gText_Rom_217EBB)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:127 AquaHideout_B1F_Text_Grunt5Intro (+1 aliases)
	.globl gText_Rom_217EE8
gText_Rom_217EE8: @ 0x08217EE8
	.string "はーあ アジトで るすばんも\nたいくつ だから あいて してあげるわー{EOS}"
	.if (. - gText_Rom_217EE8) > 0x24
	.error "gText_Rom_217EE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217EE8) < 0x24
	.space 0x24 - (. - gText_Rom_217EE8)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:130 AquaHideout_B1F_Text_Grunt5Defeat (+1 aliases)
	.globl gText_Rom_217F0C
gText_Rom_217F0C: @ 0x08217F0C
	.string "はーあ まけたわー{EOS}"
	.if (. - gText_Rom_217F0C) > 0xa
	.error "gText_Rom_217F0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F0C) < 0xa
	.space 0xa - (. - gText_Rom_217F0C)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:133 AquaHideout_B1F_Text_Grunt5PostBattle
	.globl gText_Rom_217F16
gText_Rom_217F16: @ 0x08217F16
	.string "あんまり うろちょろ してると\nほかの アクアだんに やられるかもよー{EOS}"
	.if (. - gText_Rom_217F16) > 0x24
	.error "gText_Rom_217F16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F16) < 0x24
	.space 0x24 - (. - gText_Rom_217F16)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:136 AquaHideout_B1F_Text_Grunt7Intro (+1 aliases)
	.globl gText_Rom_217F3A
gText_Rom_217F3A: @ 0x08217F3A
	.string "ちょっと そこの あんた!\pアクアだんと マグマだんの ユニフォーム\nどっちが かっこいいと おもう?{EOS}"
	.if (. - gText_Rom_217F3A) > 0x34
	.error "gText_Rom_217F3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F3A) < 0x34
	.space 0x34 - (. - gText_Rom_217F3A)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:139 AquaHideout_B1F_Text_Grunt7Defeat (+1 aliases)
	.globl gText_Rom_217F6E
gText_Rom_217F6E: @ 0x08217F6E
	.string "かっこよく まけたわ……{EOS}"
	.if (. - gText_Rom_217F6E) > 0xd
	.error "gText_Rom_217F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_217F6E) < 0xd
	.space 0xd - (. - gText_Rom_217F6E)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:142 AquaHideout_B1F_Text_Grunt7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_217F7B
gText_Rom_217F7B: @ 0x08217F7B
	.string "ユニフォームが かっこいいと\nしょうぶに まけても えになる でしょ?{EOS}"
	.if (. - gText_Rom_217F7B) != 0x24
	.error "gText_Rom_217F7B must retain its original byte length"
	.endif
	.globl gText_Rom_217F9A
	.set gText_Rom_217F9A, gText_Rom_217F7B + 0x1f
	@ Embedded ROM bytes: file offset 0x217F9F, size 0x10E
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0xA5, 0x7F, 0x21, 0x08, 0x00, 0x2B, 0x70, 0x00, 0x07, 0x01, 0xAF, 0x7F, 0x21, 0x08, 0x02
	.byte 0x16, 0x01, 0x40, 0x01, 0x00, 0x03, 0x69, 0x16, 0x08, 0x80, 0x01, 0x00, 0x2F, 0x15, 0x00, 0x4F
	.byte 0x08, 0x80, 0x1B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x08, 0x80, 0x21, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x16, 0x01, 0x40, 0x01, 0x00, 0x6B, 0x02, 0x5C, 0x02, 0x1E, 0x00, 0x00, 0x00
	.byte 0xAD, 0x80, 0x21, 0x08, 0x1D, 0x81, 0x21, 0x08, 0xF5, 0x7F, 0x21, 0x08, 0x0F, 0x00, 0x65, 0x81
	.byte 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x16, 0x08, 0x80, 0x01, 0x00, 0x16, 0x09, 0x80, 0x04, 0x00
	.byte 0x4F, 0x08, 0x80, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x14, 0x00, 0x4F, 0x08, 0x80
	.byte 0x21, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte gText_Rom_21812F @ ROM pointer 0x0821812F
	.byte 0x09, 0x04, 0x68, 0x4F, 0x08, 0x80, 0x27, 0x36, 0x24, 0x08, 0x4F, 0x09, 0x80, 0x50, 0x80, 0x21
	.byte 0x08, 0x51, 0x00, 0x00, 0x53, 0x09, 0x80, 0x28, 0x14, 0x00, 0x4F, 0x08, 0x80, 0x21, 0x36, 0x24
	.byte 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00, 0x65, 0x81, 0x21, 0x08, 0x09, 0x04, 0x29, 0x70, 0x00, 0x29
	.byte 0x54, 0x03, 0x6C, 0x02, 0x0A, 0x0A, 0x0A, 0x0A, 0xFE, 0x0B, 0x0B, 0x0B, 0x0B, 0xFE, 0x5C, 0x02
	.byte 0x05, 0x00, 0x00, 0x00
	.4byte gText_Rom_2181E1 @ ROM pointer 0x082181E1
	.4byte gText_Rom_218205 @ ROM pointer 0x08218205
	.byte 0x75, 0x80, 0x21, 0x08, 0x0F, 0x00, 0x18, 0x82, 0x21, 0x08, 0x09, 0x06, 0x02, 0x0F, 0x00, 0x18
	.byte 0x82, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x5C, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x2F, 0x82, 0x21
	.byte 0x08, 0x7F, 0x82, 0x21, 0x08, 0x0F, 0x00, 0x97, 0x82, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00
	.byte 0xC1, 0x00, 0x00, 0x00
	.4byte gText_Rom_2182D8 @ ROM pointer 0x082182D8
	.4byte gText_Rom_21830C @ ROM pointer 0x0821830C
	.byte 0x0F, 0x00, 0x2A, 0x83, 0x21, 0x08, 0x09, 0x06, 0x02
