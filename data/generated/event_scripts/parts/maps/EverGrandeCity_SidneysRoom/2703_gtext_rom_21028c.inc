	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:67 EverGrandeCity_SidneysRoom_Text_IntroSpeech
	.globl gText_Rom_21028C
gText_Rom_21028C: @ 0x0821028C
	.string "ようこそ チャレンジャー!\nおれは してんのうの カゲツ\pうーん いい かお してるな\nなかなか たのしませて くれそうだぞ!\lいいぞ! いい かんじだぞ!\pよーし! おれと おまえ とで\nポケモン リーグでしか できない\lたたかいを たのしむと しようぜ!!$"
	.if (. - gText_Rom_21028C) > 0x83
	.error "gText_Rom_21028C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21028C) < 0x83
	.space 0x83 - (. - gText_Rom_21028C)
	.endif
