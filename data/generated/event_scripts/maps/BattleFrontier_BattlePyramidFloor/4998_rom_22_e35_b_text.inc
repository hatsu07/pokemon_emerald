	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:386 BattlePyramid_Text_TwoTrainersRemaining1 (+1 aliases)
	.globl gText_Rom_22E35B
gText_Rom_22E35B: @ 0x0822E35B
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだ 2にん いるからねー!"
	.byte EOS
	.if (. - gText_Rom_22E35B) > 0x2c
	.error "gText_Rom_22E35B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E35B) < 0x2c
	.space 0x2c - (. - gText_Rom_22E35B)
	.endif
	@ Embedded ROM bytes: file offset 0x22E387, size 0x2C
	@ semanticized-mass: charmap string (44 bytes including EOS)
	.string "とっても　つよかったよ_！！\pでも　つよい　トレ_ナ_は\nまだ　1にん　いるからね_！"
	.byte EOS
