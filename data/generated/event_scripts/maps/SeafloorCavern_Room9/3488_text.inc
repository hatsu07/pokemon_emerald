	@ data/maps/SeafloorCavern_Room9/scripts.inc:233 SeafloorCavern_Room9_Text_ArchieWithThisRedOrb
	.globl gText_Rom_218D79
gText_Rom_218D79: @ 0x08218D79
	.string "アオギリ『フフフ……\pさすが というべきか……\nおまえの その ちからは みとめよう!\pだが……!\nおれには これが ある!\pこの べにいろのたまが あれば\nカイオーガを……{EOS}"
	.if (. - gText_Rom_218D79) > 0x58
	.error "gText_Rom_218D79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_218D79) < 0x58
	.space 0x58 - (. - gText_Rom_218D79)
	.endif
