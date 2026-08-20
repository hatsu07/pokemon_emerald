	@ data/maps/FortreeCity_Mart/scripts.inc:40 FortreeCity_Mart_Text_SuperRepelBetter
	.globl gText_Rom_204E0B
gText_Rom_204E0B: @ 0x08204E0B
	.string "シルバースプレーは\nききめ ながもち! こうか ばつぐん!\pつまり むしよけスプレー よりも\nすごい ってことね!{EOS}"
	.if (. - gText_Rom_204E0B) > 0x3a
	.error "gText_Rom_204E0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204E0B) < 0x3a
	.space 0x3a - (. - gText_Rom_204E0B)
	.endif
