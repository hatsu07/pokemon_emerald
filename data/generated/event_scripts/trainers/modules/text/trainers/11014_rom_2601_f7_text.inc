	@ data/text/trainers.inc:2606 Route124_Text_JennyPostBattle
	.globl gText_Rom_2601F7
gText_Rom_2601F7: @ 0x082601F7
	.string "うみを およいでいると\nおそってくる ポケモンと\lただ みているだけの ポケモンが いるの\pポケモンにも こせいが あるのね!{EOS}"
	.if (. - gText_Rom_2601F7) > 0x40
	.error "gText_Rom_2601F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2601F7) < 0x40
	.space 0x40 - (. - gText_Rom_2601F7)
	.endif
