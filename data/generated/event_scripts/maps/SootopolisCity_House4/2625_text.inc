	@ data/maps/SootopolisCity_House4/scripts.inc:22 SootopolisCity_House4_Text_AncientTreasuresWaitingInSea
	.globl gText_Rom_20F5B9
gText_Rom_20F5B9: @ 0x0820F5B9
	.string "いいことを おしえてやろう\pこの あたりの うみの そこには\nこだいの いせきが あるそうだ!\pひょっとしたら むかしの おたからが\nざくざく みつかるかも しれないぜ!$"
	.if (. - gText_Rom_20F5B9) > 0x56
	.error "gText_Rom_20F5B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20F5B9) < 0x56
	.space 0x56 - (. - gText_Rom_20F5B9)
	.endif
