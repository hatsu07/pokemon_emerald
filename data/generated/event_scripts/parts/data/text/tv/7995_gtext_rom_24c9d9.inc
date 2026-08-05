	@ data/text/tv.inc:28 BattleFrontier_BattleTowerLobby_Text_InterviewRequest
	.globl gText_Rom_24C9D9
gText_Rom_24C9D9: @ 0x0824C9D9
	.string "あ! いま たたかっていた\nトレーナーの かたですね!\pわたし いま いろんな トレーナーの\nはなしを きいて まわってるんだけど\pたたかいおわった かんそうを\nすこしだけ きかせて もらえませんか?$"
	.if (. - gText_Rom_24C9D9) > 0x65
	.error "gText_Rom_24C9D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C9D9) < 0x65
	.space 0x65 - (. - gText_Rom_24C9D9)
	.endif
