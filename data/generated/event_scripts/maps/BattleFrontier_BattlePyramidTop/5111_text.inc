	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:258 BattleFrontier_BattlePyramidTop_Text_FarewellForNow
	.globl gText_Rom_22F164
gText_Rom_22F164: @ 0x0822F164
	.string "いやぁー わたしも\nまだまだと いうこと らしいな!!\pえんが あったら また あおう!\nさらばだ! わかき ぼうけんしゃよ!!"
	.byte EOS
	.if (. - gText_Rom_22F164) > 0x41
	.error "gText_Rom_22F164 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F164) < 0x41
	.space 0x41 - (. - gText_Rom_22F164)
	.endif
