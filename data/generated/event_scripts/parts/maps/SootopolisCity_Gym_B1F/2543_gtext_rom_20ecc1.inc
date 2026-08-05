	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:78 SootopolisCity_Gym_B1F_Text_DaphnePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20ECC1
gText_Rom_20ECC1: @ 0x0820ECC1
	.string "あなたさまの たたかう すがたも\nすばらしくってよ\pああっ……!\nポケモンに であえて よかったですわ$"
	.if (. - gText_Rom_20ECC1) != 0x34
	.error "gText_Rom_20ECC1 must retain its original byte length"
	.endif
