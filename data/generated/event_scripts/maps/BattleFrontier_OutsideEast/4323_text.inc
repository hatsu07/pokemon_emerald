	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:315 BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere
	.globl gText_Rom_223210
gText_Rom_223210: @ 0x08223210
	.string "おほほほーいっ!\nここが ランキングホール っスねー!\pわしも ここに なを のこす ような\nえいこうの スーパー チャンプに\lはやく なりたい っスよ!{EOS}"
	.if (. - gText_Rom_223210) > 0x4e
	.error "gText_Rom_223210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223210) < 0x4e
	.space 0x4e - (. - gText_Rom_223210)
	.endif
