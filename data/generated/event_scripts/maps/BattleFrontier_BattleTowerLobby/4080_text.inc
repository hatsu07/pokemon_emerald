	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:962 BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer
	.globl gText_Rom_2206DE
gText_Rom_2206DE: @ 0x082206DE
	.string "いよいよ つぎは 50にんめの\nトレーナー ですね!\pこれからは 7にんを かちぬく たびに\nあなたの ポケモンに きねんリボンが\lおくられますので がんばって くださいね!"
	.byte EOS
	.if (. - gText_Rom_2206DE) > 0x58
	.error "gText_Rom_2206DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206DE) < 0x58
	.space 0x58 - (. - gText_Rom_2206DE)
	.endif
