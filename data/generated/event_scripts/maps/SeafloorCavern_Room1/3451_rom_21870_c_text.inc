	@ data/maps/SeafloorCavern_Room1/scripts.inc:14 SeafloorCavern_Room1_Text_Grunt1Intro (+1 aliases)
	.globl gText_Rom_21868D
gText_Rom_21868D: @ 0x0821868D
	.string "こどもに ようは ねーんだ\nほら さっさと かえれよ!{EOS}"
	.if (. - gText_Rom_21868D) > 0x1c
	.error "gText_Rom_21868D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21868D) < 0x1c
	.space 0x1c - (. - gText_Rom_21868D)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:17 SeafloorCavern_Room1_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_2186A9
gText_Rom_2186A9: @ 0x082186A9
	.string "おれが かえりたいよー!{EOS}"
	.if (. - gText_Rom_2186A9) > 0xd
	.error "gText_Rom_2186A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186A9) < 0xd
	.space 0xd - (. - gText_Rom_2186A9)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:20 SeafloorCavern_Room1_Text_Grunt1PostBattle
	.globl gText_Rom_2186B6
gText_Rom_2186B6: @ 0x082186B6
	.string "はやく かんぶに なって\nしたっぱを しごいて やりたい……{EOS}"
	.if (. - gText_Rom_2186B6) > 0x1f
	.error "gText_Rom_2186B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186B6) < 0x1f
	.space 0x1f - (. - gText_Rom_2186B6)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:23 SeafloorCavern_Room1_Text_Grunt2Intro (+1 aliases)
	.globl gText_Rom_2186D5
gText_Rom_2186D5: @ 0x082186D5
	.string "せんすいてい ちっちゃいからよー\nからだの あちこちが いたい じゃねーか!{EOS}"
	.if (. - gText_Rom_2186D5) > 0x27
	.error "gText_Rom_2186D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186D5) < 0x27
	.space 0x27 - (. - gText_Rom_2186D5)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:26 SeafloorCavern_Room1_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_2186FC
gText_Rom_2186FC: @ 0x082186FC
	.string "まけたら\nいたい じゃねーか!{EOS}"
	.if (. - gText_Rom_2186FC) > 0x10
	.error "gText_Rom_2186FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2186FC) < 0x10
	.space 0x10 - (. - gText_Rom_2186FC)
	.endif
	@ data/maps/SeafloorCavern_Room1/scripts.inc:29 SeafloorCavern_Room1_Text_Grunt2PostBattle
	.globl gText_Rom_21870C
gText_Rom_21870C: @ 0x0821870C
	.string "うばった せんすいていの のりごこち\nありゃ さいあく だな!\lとにかく せますぎ じゃねーか!{EOS}"
	.if (. - gText_Rom_21870C) > 0x31
	.error "gText_Rom_21870C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21870C) < 0x31
	.space 0x31 - (. - gText_Rom_21870C)
	.endif
	@ Embedded ROM bytes: file offset 0x21873D, size 0x30
	.byte 0x00, 0x00, 0x5C, 0x00, 0x21, 0x00, 0x00, 0x00, 0x6D, 0x87, 0x21, 0x08, 0xF9, 0x87, 0x21, 0x08
	.byte 0x0F, 0x00, 0x08, 0x88, 0x21, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x37, 0x02, 0x00, 0x00, 0x6E
	.byte 0x88, 0x21, 0x08, 0xD1, 0x88, 0x21, 0x08, 0x0F, 0x00, 0xD6, 0x88, 0x21, 0x08, 0x09, 0x06, 0x02
