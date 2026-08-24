	@ data/maps/BattleFrontier_Lounge8/scripts.inc:16 BattleFrontier_Lounge8_Text_WhatATrainerNeeds
	.globl gText_Rom_23AFEE
gText_Rom_23AFEE: @ 0x0823AFEE
	.string "トレーナーに ひつような もの……\pちしき…\nせんりゃく…\lうん…\lとうし…\lこころ…\lゆうき…\lそして さいのう か……\pぼく ぜんぶ バッチリ じゃん!\nどこの しせつでも らくしょー だね\pえっ? ポケモン? なんのことだい?"
	.byte EOS
	.if (. - gText_Rom_23AFEE) > 0x75
	.error "gText_Rom_23AFEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AFEE) < 0x75
	.space 0x75 - (. - gText_Rom_23AFEE)
	.endif
	@ data/maps/BattleFrontier_Lounge8/scripts.inc:19 BattleFrontier_Lounge8_Text_KnowAboutFrontierBrains
	.globl gText_Rom_23B063
gText_Rom_23B063: @ 0x0823B063
	.string "フロンティアブレーンって しってる?\pバトルフロンティアに ある\n7つの しせつを かんりする\lとくべつな トレーナーたちの ことを\lエニシダは そうよんでる らしいわ"
	.byte EOS
	.if (. - gText_Rom_23B063) > 0x55
	.error "gText_Rom_23B063 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B063) < 0x55
	.space 0x55 - (. - gText_Rom_23B063)
	.endif
	@ data/maps/BattleFrontier_Lounge8/scripts.inc:22 BattleFrontier_Lounge8_Text_ToldMeIHaveTalentForBattling
	.globl gText_Rom_23B0B8
gText_Rom_23B0B8: @ 0x0823B0B8
	.string "ぼく バトルタワーで おねえちゃんに\nたたかいの さいのうが あるねって\lすごく ほめられたのー!\pでも ぼく ポケモン コンテストの\nほーが すき なの!\pでも ポケモン コンテストは\nぜんぜん だめだよ!\pさいのうって すきとは ちがうの?"
	.byte EOS
	.if (. - gText_Rom_23B0B8) > 0x7b
	.error "gText_Rom_23B0B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23B0B8) < 0x7b
	.space 0x7b - (. - gText_Rom_23B0B8)
	.endif
	@ Embedded ROM bytes: file offset 0x23B133, size 0x4C
	.byte 0x00, 0x03, 0x3F, 0xB1, 0x23, 0x08, 0x05, 0x0F, 0x79, 0x24, 0x08, 0x00, 0x9F, 0x16, 0x00, 0x02
	.byte 0x16, 0x0B, 0x80, 0x01, 0x00, 0x04, 0xB8, 0x29, 0x24, 0x08, 0x66, 0x6D, 0x6C, 0x02, 0x0F, 0x00
	.byte 0x7F, 0xB1, 0x23, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0xC4, 0xB1, 0x23, 0x08, 0x09, 0x02, 0x02
	.byte 0x0F, 0x00, 0xF8, 0xB1, 0x23, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x30, 0xA1, 0x3B, 0x01, 0x00
	.byte 0x00, 0x0F, 0x00, 0x16, 0xB2, 0x23, 0x08, 0x09, 0x04, 0xC5, 0x6C, 0x02
