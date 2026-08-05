	@ data/text/trainers.inc:2696 Route124_Text_DeclanPostBattle
	.globl gText_Rom_2606A8
gText_Rom_2606A8: @ 0x082606A8
	.string "ビキニのおねえさんを さそって\nえんえいと しゃれこんで みようかな?$"
	.if (. - gText_Rom_2606A8) > 0x24
	.error "gText_Rom_2606A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2606A8) < 0x24
	.space 0x24 - (. - gText_Rom_2606A8)
	.endif
