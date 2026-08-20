	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:671 BattleFrontier_BattleDomeLobby_Text_ExplainTourneyTree
	.globl gText_Rom_227DDA
gText_Rom_227DDA: @ 0x08227DDA
	.string "トーナメントひょうは\nしあいまえの ひかえしつで\lかかりいんが みせてくれます\pトーナメントひょう には\n「ぜんかいの しあいけっか」\p「トレーナーの もっている\n ポケモンの じょうほう」\p「トレーナーの たたかいかた」\p……などの じょうほうが かかれているので\nしっかりと みましょう{EOS}"
	.if (. - gText_Rom_227DDA) > 0x92
	.error "gText_Rom_227DDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_227DDA) < 0x92
	.space 0x92 - (. - gText_Rom_227DDA)
	.endif
