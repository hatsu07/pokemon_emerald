	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:350 BattlePyramid_Text_SixItemsRemaining6
	.globl BattlePyramid_Text_SixItemsRemaining6
BattlePyramid_Text_SixItemsRemaining6: @ 0x0822E155
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 6つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_SixItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_SixItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_SixItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:353 BattlePyramid_Text_FiveItemsRemaining6
	.globl BattlePyramid_Text_FiveItemsRemaining6
BattlePyramid_Text_FiveItemsRemaining6: @ 0x0822E17E
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 5つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_FiveItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FiveItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:356 BattlePyramid_Text_FourItemsRemaining6
	.globl BattlePyramid_Text_FourItemsRemaining6
BattlePyramid_Text_FourItemsRemaining6: @ 0x0822E1A7
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 4つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_FourItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_FourItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_FourItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:359 BattlePyramid_Text_ThreeItemsRemaining6
	.globl BattlePyramid_Text_ThreeItemsRemaining6
BattlePyramid_Text_ThreeItemsRemaining6: @ 0x0822E1D0
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 3つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_ThreeItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_ThreeItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:362 BattlePyramid_Text_TwoItemsRemaining6
	.globl BattlePyramid_Text_TwoItemsRemaining6
BattlePyramid_Text_TwoItemsRemaining6: @ 0x0822E1F9
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 2つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoItemsRemaining6) > 0x29
	.error "BattlePyramid_Text_TwoItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoItemsRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_TwoItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:365 BattlePyramid_Text_OneItemRemaining6
	.globl BattlePyramid_Text_OneItemRemaining6
BattlePyramid_Text_OneItemRemaining6: @ 0x0822E222
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが あと 1つは あるそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_OneItemRemaining6) > 0x29
	.error "BattlePyramid_Text_OneItemRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_OneItemRemaining6) < 0x29
	.space 0x29 - (. - BattlePyramid_Text_OneItemRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:368 BattlePyramid_Text_ZeroItemsRemaining6
	.globl BattlePyramid_Text_ZeroItemsRemaining6
BattlePyramid_Text_ZeroItemsRemaining6: @ 0x0822E24B
	.string "どうぐは もっているかい?\pこの だんには\nどうぐが もう ないそうだよ"
	.byte EOS
	.if (. - BattlePyramid_Text_ZeroItemsRemaining6) > 0x25
	.error "BattlePyramid_Text_ZeroItemsRemaining6 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ZeroItemsRemaining6) < 0x25
	.space 0x25 - (. - BattlePyramid_Text_ZeroItemsRemaining6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:371 BattlePyramid_Text_SevenTrainersRemaining1
	.globl BattlePyramid_Text_SevenTrainersRemaining1
BattlePyramid_Text_SevenTrainersRemaining1: @ 0x0822E270
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 7にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_SevenTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_SevenTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SevenTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_SevenTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:374 BattlePyramid_Text_SixTrainersRemaining1
	.globl BattlePyramid_Text_SixTrainersRemaining1
BattlePyramid_Text_SixTrainersRemaining1: @ 0x0822E29F
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 6にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_SixTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_SixTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_SixTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_SixTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:377 BattlePyramid_Text_FiveTrainersRemaining1
	.globl BattlePyramid_Text_FiveTrainersRemaining1
BattlePyramid_Text_FiveTrainersRemaining1: @ 0x0822E2CE
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 5にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_FiveTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_FiveTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FiveTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_FiveTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:380 BattlePyramid_Text_FourTrainersRemaining1
	.globl BattlePyramid_Text_FourTrainersRemaining1
BattlePyramid_Text_FourTrainersRemaining1: @ 0x0822E2FD
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 4にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_FourTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_FourTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_FourTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_FourTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:383 BattlePyramid_Text_ThreeTrainersRemaining1
	.globl BattlePyramid_Text_ThreeTrainersRemaining1
BattlePyramid_Text_ThreeTrainersRemaining1: @ 0x0822E32C
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 3にんも いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining1) > 0x2f
	.error "BattlePyramid_Text_ThreeTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_ThreeTrainersRemaining1) < 0x2f
	.space 0x2f - (. - BattlePyramid_Text_ThreeTrainersRemaining1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:386 BattlePyramid_Text_TwoTrainersRemaining1 (+1 aliases)
	.globl BattlePyramid_Text_TwoTrainersRemaining1
BattlePyramid_Text_TwoTrainersRemaining1: @ 0x0822E35B
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだ 2にん いるからねー!"
	.byte EOS
	.if (. - BattlePyramid_Text_TwoTrainersRemaining1) > 0x2c
	.error "BattlePyramid_Text_TwoTrainersRemaining1 may not grow beyond its original slot"
	.endif
	.if (. - BattlePyramid_Text_TwoTrainersRemaining1) < 0x2c
	.space 0x2c - (. - BattlePyramid_Text_TwoTrainersRemaining1)
	.endif
	@ Embedded ROM bytes: file offset 0x22E387, size 0x2C
	@ semanticized-mass: charmap string (44 bytes including EOS)
	.string "とっても　つよかったよ_！！\pでも　つよい　トレ_ナ_は\nまだ　1にん　いるからね_！"
	.byte EOS
