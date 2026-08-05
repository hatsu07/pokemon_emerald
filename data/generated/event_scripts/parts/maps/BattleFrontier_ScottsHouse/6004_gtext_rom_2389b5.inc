	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:212 BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier
	.globl gText_Rom_2389B5
gText_Rom_2389B5: @ 0x082389B5
	.string "エニシダ『ああ いらっしゃい\nへへ…… せまい ところで ごめんよ\pでは あらためて {PLAYER}{KUN}\nようこそ バトルフロンティアへ!\pここは わたしの ゆめの けっしょう!\nなんねんも かかって やっと\lかたちに することが できたんだ!"
	.byte EOS
	.if (. - gText_Rom_2389B5) > 0x76
	.error "gText_Rom_2389B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2389B5) < 0x76
	.space 0x76 - (. - gText_Rom_2389B5)
	.endif
