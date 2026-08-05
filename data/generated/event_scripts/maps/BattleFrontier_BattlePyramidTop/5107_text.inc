	@ data/maps/BattleFrontier_BattlePyramidTop/scripts.inc:252 BattleFrontier_BattlePyramidTop_Text_BrandonRemarkableHaveThis
	.globl gText_Rom_22F0EE
gText_Rom_22F0EE: @ 0x0822F0EE
	.string "ジンダイ『はっはっはっ!\nいやぁー じつに すばらしい!\lまったく さいこうじゃ ないか!!\pわかき ぼうけんしゃよ!!\pきみには かんぱい だよ!\nさあ! こいつを うけとって くれ!!"
	.byte EOS
	.if (. - gText_Rom_22F0EE) > 0x5f
	.error "gText_Rom_22F0EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22F0EE) < 0x5f
	.space 0x5f - (. - gText_Rom_22F0EE)
	.endif
