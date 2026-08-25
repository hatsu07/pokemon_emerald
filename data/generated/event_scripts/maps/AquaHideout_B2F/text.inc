	@ data/maps/AquaHideout_B2F/scripts.inc:89 AquaHideout_B2F_Text_MattIntro (+1 aliases)
	.globl AquaHideout_B2F_Text_MattIntro
AquaHideout_B2F_Text_MattIntro: @ 0x082180AD
	.string "ウヒョヒョ……\pもう ここまで きたのか!\nおもって いたより やるな!\pだが ここまでだ!\nおれは これまでの したっぱども とは\lひとあじ ちがう!\pじかんかせぎ なんか しねえで\nおまえを コテンパンに してやるぜ!{EOS}"
	.if (. - AquaHideout_B2F_Text_MattIntro) > 0x70
	.error "AquaHideout_B2F_Text_MattIntro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_MattIntro) < 0x70
	.space 0x70 - (. - AquaHideout_B2F_Text_MattIntro)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:92 AquaHideout_B2F_Text_MattDefeat (+1 aliases)
	.globl AquaHideout_B2F_Text_MattDefeat
AquaHideout_B2F_Text_MattDefeat: @ 0x0821811D
	.string "ウヒョヒョ……\nまけちまったか……{EOS}"
	.if (. - AquaHideout_B2F_Text_MattDefeat) > 0x12
	.error "AquaHideout_B2F_Text_MattDefeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_MattDefeat) < 0x12
	.space 0x12 - (. - AquaHideout_B2F_Text_MattDefeat)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:95 AquaHideout_B2F_Text_OurBossGotThroughHisPreparations
	.globl AquaHideout_B2F_Text_OurBossGotThroughHisPreparations
AquaHideout_B2F_Text_OurBossGotThroughHisPreparations: @ 0x0821812F
	.string "ウヒョヒョ……!\pおれが おまえと\nあそんで やっている あいだに\lリーダーの じゅんびが ととのったぜ!{EOS}"
	.if (. - AquaHideout_B2F_Text_OurBossGotThroughHisPreparations) > 0x36
	.error "AquaHideout_B2F_Text_OurBossGotThroughHisPreparations may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_OurBossGotThroughHisPreparations) < 0x36
	.space 0x36 - (. - AquaHideout_B2F_Text_OurBossGotThroughHisPreparations)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:98 AquaHideout_B2F_Text_MattPostBattle
	.globl AquaHideout_B2F_Text_MattPostBattle
AquaHideout_B2F_Text_MattPostBattle: @ 0x08218165
	.string "ウヒョヒョ……!\pリーダーは どこかの かいていにある\nどうくつへ しゅっぱつ したぜ!\pおいかける つもりなら ミナモの さきに\nひろがる でっかい うみを\lさがしまわって みるが いいぜ!\pそれで みつかれば いいけどな……\nウヒョヒョヒョ!{EOS}"
	.if (. - AquaHideout_B2F_Text_MattPostBattle) > 0x7c
	.error "AquaHideout_B2F_Text_MattPostBattle may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_MattPostBattle) < 0x7c
	.space 0x7c - (. - AquaHideout_B2F_Text_MattPostBattle)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:101 AquaHideout_B2F_Text_Grunt4Intro (+1 aliases)
	.globl AquaHideout_B2F_Text_Grunt4Intro
AquaHideout_B2F_Text_Grunt4Intro: @ 0x082181E1
	.string "わっはっは まちくたびれたぞ!\nおいらとも しょうぶ してもらおうか!{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt4Intro) > 0x24
	.error "AquaHideout_B2F_Text_Grunt4Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt4Intro) < 0x24
	.space 0x24 - (. - AquaHideout_B2F_Text_Grunt4Intro)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:104 AquaHideout_B2F_Text_Grunt4Defeat (+1 aliases)
	.globl AquaHideout_B2F_Text_Grunt4Defeat
AquaHideout_B2F_Text_Grunt4Defeat: @ 0x08218205
	.string "まちくたびれて\nまけて やぶれて……{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt4Defeat) > 0x13
	.error "AquaHideout_B2F_Text_Grunt4Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt4Defeat) < 0x13
	.space 0x13 - (. - AquaHideout_B2F_Text_Grunt4Defeat)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:107 AquaHideout_B2F_Text_Grunt4PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl AquaHideout_B2F_Text_Grunt4PostBattle
AquaHideout_B2F_Text_Grunt4PostBattle: @ 0x08218218
	.string "リーダーぁ……\nこんなもんで どうでしょー!{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt4PostBattle) != 0x17
	.error "AquaHideout_B2F_Text_Grunt4PostBattle must retain its original byte length"
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:110 AquaHideout_B2F_Text_Grunt6Intro (+1 aliases)
	.globl AquaHideout_B2F_Text_Grunt6Intro
AquaHideout_B2F_Text_Grunt6Intro: @ 0x0821822F
	.string "アジト じまんの ワープパネル!\pいま じぶんが どこに いるのか\nわかって ないでしょ!\pそうやって つかれはてた あいてを\nたおすのが さくせん なのよ!{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt6Intro) > 0x50
	.error "AquaHideout_B2F_Text_Grunt6Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt6Intro) < 0x50
	.space 0x50 - (. - AquaHideout_B2F_Text_Grunt6Intro)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:113 AquaHideout_B2F_Text_Grunt6Defeat (+1 aliases)
	.globl AquaHideout_B2F_Text_Grunt6Defeat
AquaHideout_B2F_Text_Grunt6Defeat: @ 0x0821827F
	.string "なによっ!\nちっとも つかれてない じゃない!{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt6Defeat) > 0x18
	.error "AquaHideout_B2F_Text_Grunt6Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt6Defeat) < 0x18
	.space 0x18 - (. - AquaHideout_B2F_Text_Grunt6Defeat)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:116 AquaHideout_B2F_Text_Grunt6PostBattle
	.globl AquaHideout_B2F_Text_Grunt6PostBattle
AquaHideout_B2F_Text_Grunt6PostBattle: @ 0x08218297
	.string "そういえば…… マスターボールを\nどこに おいたのか わすれちゃったわ\pあれを まもっていないと\nリーダーに おこられるのよ……{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt6PostBattle) > 0x41
	.error "AquaHideout_B2F_Text_Grunt6PostBattle may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt6PostBattle) < 0x41
	.space 0x41 - (. - AquaHideout_B2F_Text_Grunt6PostBattle)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:119 AquaHideout_B2F_Text_Grunt8Intro (+1 aliases)
	.globl AquaHideout_B2F_Text_Grunt8Intro
AquaHideout_B2F_Text_Grunt8Intro: @ 0x082182D8
	.string "オレが アクアだんに はいって\nまっさきに おぼえ させられたのが\lこの ワープパネルの はいれつだ!{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt8Intro) > 0x34
	.error "AquaHideout_B2F_Text_Grunt8Intro may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt8Intro) < 0x34
	.space 0x34 - (. - AquaHideout_B2F_Text_Grunt8Intro)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:122 AquaHideout_B2F_Text_Grunt8Defeat (+1 aliases)
	.globl AquaHideout_B2F_Text_Grunt8Defeat
AquaHideout_B2F_Text_Grunt8Defeat: @ 0x0821830C
	.string "ワープパネルの ことで\nあたまが いっぱい だったから……{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt8Defeat) > 0x1e
	.error "AquaHideout_B2F_Text_Grunt8Defeat may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt8Defeat) < 0x1e
	.space 0x1e - (. - AquaHideout_B2F_Text_Grunt8Defeat)
	.endif
	@ data/maps/AquaHideout_B2F/scripts.inc:125 AquaHideout_B2F_Text_Grunt8PostBattle
	.globl AquaHideout_B2F_Text_Grunt8PostBattle
AquaHideout_B2F_Text_Grunt8PostBattle: @ 0x0821832A
	.string "これからは ポケモンしょうぶの\nコツも おぼえて おかないと なあ……{EOS}"
	.if (. - AquaHideout_B2F_Text_Grunt8PostBattle) > 0x24
	.error "AquaHideout_B2F_Text_Grunt8PostBattle may not grow beyond its original slot"
	.endif
	.if (. - AquaHideout_B2F_Text_Grunt8PostBattle) < 0x24
	.space 0x24 - (. - AquaHideout_B2F_Text_Grunt8PostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21834E, size 0xAA
	.byte 0x05, 0xE6, 0x83, 0x21, 0x08, 0x03, 0x5E, 0x83, 0x21, 0x08, 0x01, 0x6F, 0x83, 0x21, 0x08, 0x00
	.byte 0x29, 0xA7, 0x08, 0x2B, 0x81, 0x00, 0x06, 0x01, 0x6B, 0x83, 0x21, 0x08, 0x02, 0x29, 0xD4, 0x03
	.byte 0x02, 0x2B, 0x81, 0x00, 0x07, 0x01, 0x79, 0x83, 0x21, 0x08, 0x02, 0xA2, 0x05, 0x00, 0x03, 0x00
	.byte 0x1E, 0x02, 0x01, 0x00, 0xA2, 0x06, 0x00, 0x03, 0x00, 0x1E, 0x02, 0x01, 0x00, 0xA2, 0x07, 0x00
	.byte 0x03, 0x00, 0x1E, 0x02, 0x01, 0x00, 0xA2, 0x08, 0x00, 0x03, 0x00, 0x1E, 0x02, 0x01, 0x00, 0xA2
	.byte 0x05, 0x00, 0x04, 0x00, 0x28, 0x02, 0x00, 0x00, 0xA2, 0x06, 0x00, 0x04, 0x00, 0x28, 0x02, 0x00
	.byte 0x00, 0xA2, 0x07, 0x00, 0x04, 0x00, 0x28, 0x02, 0x00, 0x00, 0xA2, 0x08, 0x00, 0x04, 0x00, 0x28
	.byte 0x02, 0x00, 0x00, 0xA2, 0x05, 0x00, 0x05, 0x00, 0x28, 0x02, 0x00, 0x00, 0xA2, 0x06, 0x00, 0x05
	.byte 0x00, 0x28, 0x02, 0x00, 0x00, 0xA2, 0x07, 0x00, 0x05, 0x00, 0x28, 0x02, 0x00, 0x00, 0xA2, 0x08
	.byte 0x00, 0x05, 0x00, 0x28, 0x02, 0x00, 0x00, 0x03, 0x40, 0x18, 0x1B, 0xFF, 0x0A, 0x00, 0x11, 0x00
	.byte 0x02, 0x0F, 0x00, 0xF8, 0x83, 0x21, 0x08, 0x09, 0x03, 0x02
