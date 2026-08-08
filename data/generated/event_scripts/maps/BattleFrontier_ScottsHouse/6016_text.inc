	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:248 BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers
	.globl gText_Rom_238B8A
gText_Rom_238B8A: @ 0x08238B8A
	.string "エニシダ『どの トレーナーにも\nそれぞれの じんせいが あるだろ?\pでも たたかう ときは\nそんなこと ぜんぜん かんけいない\lみんな いっしょ なんだよね!\pわたしは そういう\nたたかいの じゅんすいさ ってのが\lとても すきなんだよ\pだから いろんな ところに でかけて\nしんけんに たたかってる トレーナーを\lいっぱい しょうたい してくるのさ!"
	.byte EOS
	.if (. - gText_Rom_238B8A) > 0xb1
	.error "gText_Rom_238B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238B8A) < 0xb1
	.space 0xb1 - (. - gText_Rom_238B8A)
	.endif
