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
