	@ data/maps/MeteorFalls_1F_2R/scripts.inc:92 MeteorFalls_1F_2R_Text_NicolasPostRematch
	.globl gText_Rom_2132A5
gText_Rom_2132A5: @ 0x082132A5
	.string "あいかわらず ポケモンを きたえてるな\pきみが その つよさで あるかぎり\nオレも つよくなれるよ!$"
	.if (. - gText_Rom_2132A5) > 0x33
	.error "gText_Rom_2132A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2132A5) < 0x33
	.space 0x33 - (. - gText_Rom_2132A5)
	.endif
