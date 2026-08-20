	@ data/text/trainers.inc:3218 Route132_Text_GilbertPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_261B77
gText_Rom_261B77: @ 0x08261B77
	.string "ポケモン トレーナーも\nのやまを あるき まわるから\lとっても けんこうてき だよねー!{EOS}"
	.if (. - gText_Rom_261B77) != 0x2d
	.error "gText_Rom_261B77 must retain its original byte length"
	.endif
