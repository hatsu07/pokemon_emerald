	@ data/text/tv.inc:37 BattleFrontier_BattleTowerLobby_Text_ObviousYouHadGreatBattle
	.globl gText_Rom_24CABA
gText_Rom_24CABA: @ 0x0824CABA
	.string "さっすが!\pその まんぞくした かおを みれば\nどんなに いいしあいだったか\lわかりますよ!$"
	.if (. - gText_Rom_24CABA) > 0x2f
	.error "gText_Rom_24CABA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CABA) < 0x2f
	.space 0x2f - (. - gText_Rom_24CABA)
	.endif
