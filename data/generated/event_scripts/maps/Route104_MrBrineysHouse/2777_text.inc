	@ data/maps/Route104_MrBrineysHouse/scripts.inc:118 Route104_MrBrineysHouse_Text_DeclineDeliverySail
	.globl gText_Rom_21181B
gText_Rom_21181B: @ 0x0821181B
	.string "ハギ『そうかね\nたのまれごとは いいのかね?\pまあ ふねに のる ひつようが あるときは\nいつでも えんりょなく いっておくれ!{EOS}"
	.if (. - gText_Rom_21181B) > 0x41
	.error "gText_Rom_21181B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21181B) < 0x41
	.space 0x41 - (. - gText_Rom_21181B)
	.endif
