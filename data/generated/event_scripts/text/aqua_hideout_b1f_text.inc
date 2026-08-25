	@ data/maps/AquaHideout_B1F/scripts.inc:109 AquaHideout_B1F_Text_Grunt2Intro (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt2Intro
AquaHideout_B1F_Text_Grunt2Intro: @ 0x08217E0C
	.string "アジトの ひみつを しりたけりゃ\nおれを たおす ことだな!{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt2Intro) > 0x1f
	.error "AquaHideout_B1F_Text_Grunt2Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt2Intro) < 0x1f
	.space 0x1f - (. - AquaHideout_B1F_Text_Grunt2Intro)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:112 AquaHideout_B1F_Text_Grunt2Defeat (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt2Defeat
AquaHideout_B1F_Text_Grunt2Defeat: @ 0x08217E2B
	.string "ぜんぜん かてません……!{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt2Defeat) > 0xe
	.error "AquaHideout_B1F_Text_Grunt2Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt2Defeat) < 0xe
	.space 0xe - (. - AquaHideout_B1F_Text_Grunt2Defeat)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:115 AquaHideout_B1F_Text_Grunt2PostBattle
	.globl AquaHideout_B1F_Text_Grunt2PostBattle
AquaHideout_B1F_Text_Grunt2PostBattle: @ 0x08217E39
	.string "アジトの ひみつ?\pそれはな…… いちばん おくに\nせんすいていが あるって ことよ!\pだが いまごろは いひひひ……!{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt2PostBattle) > 0x3d
	.error "AquaHideout_B1F_Text_Grunt2PostBattle may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt2PostBattle) < 0x3d
	.space 0x3d - (. - AquaHideout_B1F_Text_Grunt2PostBattle)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:118 AquaHideout_B1F_Text_Grunt3Intro (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt3Intro
AquaHideout_B1F_Text_Grunt3Intro: @ 0x08217E76
	.string "ねんりょうの ほきゅう オッケイ!\nおやつも ほきゅう オッケイ!\pあとは ジャマものを ぶっとばす だけ!{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt3Intro) > 0x37
	.error "AquaHideout_B1F_Text_Grunt3Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt3Intro) < 0x37
	.space 0x37 - (. - AquaHideout_B1F_Text_Grunt3Intro)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:121 AquaHideout_B1F_Text_Grunt3Defeat (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt3Defeat
AquaHideout_B1F_Text_Grunt3Defeat: @ 0x08217EAD
	.string "こっぴどく やられたーっ!{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt3Defeat) > 0xe
	.error "AquaHideout_B1F_Text_Grunt3Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt3Defeat) < 0xe
	.space 0xe - (. - AquaHideout_B1F_Text_Grunt3Defeat)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:124 AquaHideout_B1F_Text_Grunt3PostBattle
	.globl AquaHideout_B1F_Text_Grunt3PostBattle
AquaHideout_B1F_Text_Grunt3PostBattle: @ 0x08217EBB
	.string "ふん! これで いいんだ\pおまえの ジャマをする というのが\nおれの にんむ だったのさ{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt3PostBattle) > 0x2d
	.error "AquaHideout_B1F_Text_Grunt3PostBattle may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt3PostBattle) < 0x2d
	.space 0x2d - (. - AquaHideout_B1F_Text_Grunt3PostBattle)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:127 AquaHideout_B1F_Text_Grunt5Intro (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt5Intro
AquaHideout_B1F_Text_Grunt5Intro: @ 0x08217EE8
	.string "はーあ アジトで るすばんも\nたいくつ だから あいて してあげるわー{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt5Intro) > 0x24
	.error "AquaHideout_B1F_Text_Grunt5Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt5Intro) < 0x24
	.space 0x24 - (. - AquaHideout_B1F_Text_Grunt5Intro)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:130 AquaHideout_B1F_Text_Grunt5Defeat (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt5Defeat
AquaHideout_B1F_Text_Grunt5Defeat: @ 0x08217F0C
	.string "はーあ まけたわー{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt5Defeat) > 0xa
	.error "AquaHideout_B1F_Text_Grunt5Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt5Defeat) < 0xa
	.space 0xa - (. - AquaHideout_B1F_Text_Grunt5Defeat)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:133 AquaHideout_B1F_Text_Grunt5PostBattle
	.globl AquaHideout_B1F_Text_Grunt5PostBattle
AquaHideout_B1F_Text_Grunt5PostBattle: @ 0x08217F16
	.string "あんまり うろちょろ してると\nほかの アクアだんに やられるかもよー{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt5PostBattle) > 0x24
	.error "AquaHideout_B1F_Text_Grunt5PostBattle may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt5PostBattle) < 0x24
	.space 0x24 - (. - AquaHideout_B1F_Text_Grunt5PostBattle)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:136 AquaHideout_B1F_Text_Grunt7Intro (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt7Intro
AquaHideout_B1F_Text_Grunt7Intro: @ 0x08217F3A
	.string "ちょっと そこの あんた!\pアクアだんと マグマだんの ユニフォーム\nどっちが かっこいいと おもう?{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt7Intro) > 0x34
	.error "AquaHideout_B1F_Text_Grunt7Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt7Intro) < 0x34
	.space 0x34 - (. - AquaHideout_B1F_Text_Grunt7Intro)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:139 AquaHideout_B1F_Text_Grunt7Defeat (+1 aliases)
	.globl AquaHideout_B1F_Text_Grunt7Defeat
AquaHideout_B1F_Text_Grunt7Defeat: @ 0x08217F6E
	.string "かっこよく まけたわ……{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt7Defeat) > 0xd
	.error "AquaHideout_B1F_Text_Grunt7Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B1F_Text_Grunt7Defeat) < 0xd
	.space 0xd - (. - AquaHideout_B1F_Text_Grunt7Defeat)
	.endif
	@ data/maps/AquaHideout_B1F/scripts.inc:142 AquaHideout_B1F_Text_Grunt7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AquaHideout_B1F_Text_Grunt7PostBattle
AquaHideout_B1F_Text_Grunt7PostBattle: @ 0x08217F7B
	.string "ユニフォームが かっこいいと\nしょうぶに まけても えになる でしょ?{EOS}"
	.if (. - AquaHideout_B1F_Text_Grunt7PostBattle) != 0x24
	.error "AquaHideout_B1F_Text_Grunt7PostBattle must retain its original byte length"
	.endif
	@ Embedded ROM bytes: file offset 0x217F9F, size 0x10E
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x03, 0xA5, 0x7F, 0x21, 0x08, 0x00, 0x2B, 0x70, 0x00, 0x07, 0x01, 0xAF, 0x7F, 0x21, 0x08, 0x02
	.byte 0x16, 0x01, 0x40, 0x01, 0x00, 0x03, 0x69, 0x16, 0x08, 0x80, 0x01, 0x00, 0x2F, 0x15, 0x00, 0x4F
	.byte 0x08, 0x80, 0x1B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x4F, 0x08, 0x80, 0x21, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x16, 0x01, 0x40, 0x01, 0x00, 0x6B, 0x02, 0x5C, 0x02, 0x1E, 0x00, 0x00, 0x00
	.4byte AquaHideout_B2F_Text_MattIntro
	.4byte AquaHideout_B2F_Text_MattDefeat
	.byte 0xF5, 0x7F, 0x21, 0x08, 0x0F, 0x00
	.4byte AquaHideout_B2F_Text_MattPostBattle
	.byte 0x09, 0x04, 0x6C, 0x02, 0x16, 0x08, 0x80, 0x01, 0x00, 0x16, 0x09, 0x80, 0x04, 0x00
	.byte 0x4F, 0x08, 0x80, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x14, 0x00, 0x4F, 0x08, 0x80
	.byte 0x21, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte AquaHideout_B2F_Text_OurBossGotThroughHisPreparations @ ROM pointer 0x0821812F
	.byte 0x09, 0x04, 0x68, 0x4F, 0x08, 0x80, 0x27, 0x36, 0x24, 0x08, 0x4F, 0x09, 0x80, 0x50, 0x80, 0x21
	.byte 0x08, 0x51, 0x00, 0x00, 0x53, 0x09, 0x80, 0x28, 0x14, 0x00, 0x4F, 0x08, 0x80, 0x21, 0x36, 0x24
	.byte 0x08, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte AquaHideout_B2F_Text_MattPostBattle
	.byte 0x09, 0x04, 0x29, 0x70, 0x00, 0x29
	.byte 0x54, 0x03, 0x6C, 0x02, 0x0A, 0x0A, 0x0A, 0x0A, 0xFE, 0x0B, 0x0B, 0x0B, 0x0B, 0xFE, 0x5C, 0x02
	.byte 0x05, 0x00, 0x00, 0x00
	.4byte AquaHideout_B2F_Text_Grunt4Intro @ ROM pointer 0x082181E1
	.4byte AquaHideout_B2F_Text_Grunt4Defeat @ ROM pointer 0x08218205
	.byte 0x75, 0x80, 0x21, 0x08, 0x0F, 0x00, 0x18, 0x82, 0x21, 0x08, 0x09, 0x06, 0x02, 0x0F, 0x00, 0x18
	.byte 0x82, 0x21, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x5C, 0x00, 0x1C, 0x00, 0x00, 0x00
	.4byte AquaHideout_B2F_Text_Grunt6Intro
	.4byte AquaHideout_B2F_Text_Grunt6Defeat
	.byte 0x0F, 0x00
	.4byte AquaHideout_B2F_Text_Grunt6PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00
	.byte 0xC1, 0x00, 0x00, 0x00
	.4byte AquaHideout_B2F_Text_Grunt8Intro @ ROM pointer 0x082182D8
	.4byte AquaHideout_B2F_Text_Grunt8Defeat @ ROM pointer 0x0821830C
	.byte 0x0F, 0x00, 0x2A, 0x83, 0x21, 0x08, 0x09, 0x06, 0x02
