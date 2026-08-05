	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:411 BattleFrontier_OutsideWest_Text_FansOverThereUsedToBeTrainers
	.globl gText_Rom_21F5B0
gText_Rom_21F5B0: @ 0x0821F5B0
	.string "あそこで けんか してる ひとたち……\pあれでも もともとは すごく つよくて\nゆうめいな トレーナー だったんだよ\pだけど バトルトーナメントで\nあるトレーナーに ボコボコに まけてから\lみんな そのトレーナーの\lだいファンに なっちゃったんだ\pいまじゃ まいにち ちょうせんも しないで\nバトルドームに おうえんに かよってるよ"
	.byte EOS
	.if (. - gText_Rom_21F5B0) > 0xa7
	.error "gText_Rom_21F5B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F5B0) < 0xa7
	.space 0xa7 - (. - gText_Rom_21F5B0)
	.endif
