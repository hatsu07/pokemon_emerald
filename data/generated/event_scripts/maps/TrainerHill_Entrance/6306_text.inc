	@ data/maps/TrainerHill_Entrance/scripts.inc:371 TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop
	.globl gText_Rom_23BF2E
gText_Rom_23BF2E: @ 0x0823BF2E
	.string "あそこに タイムボードが\nあるでしょ?\pわたしは ともだちと どっちがはやく\nいちばん うえまで いけるか\lタイムを きそってるのよ!"
	.byte EOS
	.if (. - gText_Rom_23BF2E) > 0x44
	.error "gText_Rom_23BF2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BF2E) < 0x44
	.space 0x44 - (. - gText_Rom_23BF2E)
	.endif
