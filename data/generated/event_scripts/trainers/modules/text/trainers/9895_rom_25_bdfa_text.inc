	@ data/text/trainers.inc:974 Route111_Text_IrenePostBattle
	.globl gText_Rom_25BDFA
gText_Rom_25BDFA: @ 0x0825BDFA
	.string "えんとつやまに いこうかな? って\nおもって いるんだけど\lこのあたりの けしきも いいのよね!$"
	.if (. - gText_Rom_25BDFA) > 0x31
	.error "gText_Rom_25BDFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BDFA) < 0x31
	.space 0x31 - (. - gText_Rom_25BDFA)
	.endif
