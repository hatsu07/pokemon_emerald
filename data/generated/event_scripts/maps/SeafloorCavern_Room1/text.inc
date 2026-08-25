	@ data/maps/SeafloorCavern_Room1/scripts.inc:14 SeafloorCavern_Room1_Text_Grunt1Intro (+1 aliases)
	.globl SeafloorCavern_Room1_Text_Grunt1Intro
SeafloorCavern_Room1_Text_Grunt1Intro: @ 0x0821868D
	.string "こどもに ようは ねーんだ\nほら さっさと かえれよ!{EOS}"
	.if (. - SeafloorCavern_Room1_Text_Grunt1Intro) > 0x1c
	.error "SeafloorCavern_Room1_Text_Grunt1Intro may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room1_Text_Grunt1Intro) < 0x1c
	.space 0x1c - (. - SeafloorCavern_Room1_Text_Grunt1Intro)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:17 SeafloorCavern_Room1_Text_Grunt1Defeat (+1 aliases)
	.globl SeafloorCavern_Room1_Text_Grunt1Defeat
SeafloorCavern_Room1_Text_Grunt1Defeat: @ 0x082186A9
	.string "おれが かえりたいよー!{EOS}"
	.if (. - SeafloorCavern_Room1_Text_Grunt1Defeat) > 0xd
	.error "SeafloorCavern_Room1_Text_Grunt1Defeat may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room1_Text_Grunt1Defeat) < 0xd
	.space 0xd - (. - SeafloorCavern_Room1_Text_Grunt1Defeat)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:20 SeafloorCavern_Room1_Text_Grunt1PostBattle
	.globl SeafloorCavern_Room1_Text_Grunt1PostBattle
SeafloorCavern_Room1_Text_Grunt1PostBattle: @ 0x082186B6
	.string "はやく かんぶに なって\nしたっぱを しごいて やりたい……{EOS}"
	.if (. - SeafloorCavern_Room1_Text_Grunt1PostBattle) > 0x1f
	.error "SeafloorCavern_Room1_Text_Grunt1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room1_Text_Grunt1PostBattle) < 0x1f
	.space 0x1f - (. - SeafloorCavern_Room1_Text_Grunt1PostBattle)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:23 SeafloorCavern_Room1_Text_Grunt2Intro (+1 aliases)
	.globl SeafloorCavern_Room1_Text_Grunt2Intro
SeafloorCavern_Room1_Text_Grunt2Intro: @ 0x082186D5
	.string "せんすいてい ちっちゃいからよー\nからだの あちこちが いたい じゃねーか!{EOS}"
	.if (. - SeafloorCavern_Room1_Text_Grunt2Intro) > 0x27
	.error "SeafloorCavern_Room1_Text_Grunt2Intro may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room1_Text_Grunt2Intro) < 0x27
	.space 0x27 - (. - SeafloorCavern_Room1_Text_Grunt2Intro)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:26 SeafloorCavern_Room1_Text_Grunt2Defeat (+1 aliases)
	.globl SeafloorCavern_Room1_Text_Grunt2Defeat
SeafloorCavern_Room1_Text_Grunt2Defeat: @ 0x082186FC
	.string "まけたら\nいたい じゃねーか!{EOS}"
	.if (. - SeafloorCavern_Room1_Text_Grunt2Defeat) > 0x10
	.error "SeafloorCavern_Room1_Text_Grunt2Defeat may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room1_Text_Grunt2Defeat) < 0x10
	.space 0x10 - (. - SeafloorCavern_Room1_Text_Grunt2Defeat)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:29 SeafloorCavern_Room1_Text_Grunt2PostBattle
	.globl SeafloorCavern_Room1_Text_Grunt2PostBattle
SeafloorCavern_Room1_Text_Grunt2PostBattle: @ 0x0821870C
	.string "うばった せんすいていの のりごこち\nありゃ さいあく だな!\lとにかく せますぎ じゃねーか!{EOS}"
	.if (. - SeafloorCavern_Room1_Text_Grunt2PostBattle) > 0x31
	.error "SeafloorCavern_Room1_Text_Grunt2PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SeafloorCavern_Room1_Text_Grunt2PostBattle) < 0x31
	.space 0x31 - (. - SeafloorCavern_Room1_Text_Grunt2PostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x21873D, size 0x30
	.byte 0x00, 0x00, 0x5C, 0x00, 0x21, 0x00, 0x00, 0x00
	.4byte SeafloorCavern_Room3_Text_ShellyIntro
	.4byte SeafloorCavern_Room3_Text_ShellyDefeat
	.byte 0x0F, 0x00
	.4byte SeafloorCavern_Room3_Text_ShellyPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x37, 0x02, 0x00, 0x00, 0x6E
	.byte 0x88, 0x21, 0x08, 0xD1, 0x88, 0x21, 0x08, 0x0F, 0x00, 0xD6, 0x88, 0x21, 0x08, 0x09, 0x06, 0x02
