	@ data/text/apprentice.inc:478 gText_ApprenticeItemAlreadyRecommended15
	.globl gText_Rom_2700C9
gText_Rom_2700C9: @ 0x082700C9
	.string "いやいや まってくれ\nそれは まえに おしえてくれた だろう\lそれとは ちがった ものを\lすすめられて みたいんだ\pそれとも {STR_VAR_2}は\nなにも もたない ほうが いい……?\lほんとうかね?"
	.byte EOS
	.if (. - gText_Rom_2700C9) > 0x5e
	.error "gText_Rom_2700C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2700C9) < 0x5e
	.space 0x5e - (. - gText_Rom_2700C9)
	.endif
