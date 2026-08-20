	@ data/text/trainers.inc:3407 Route134_Text_MarleyPostBattle
	.globl gText_Rom_2622AE
gText_Rom_2622AE: @ 0x082622AE
	.string "すばやさへの こだわりは すてきれないの\nもっと がんばって みますわ!{EOS}"
	.if (. - gText_Rom_2622AE) > 0x25
	.error "gText_Rom_2622AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2622AE) < 0x25
	.space 0x25 - (. - gText_Rom_2622AE)
	.endif
