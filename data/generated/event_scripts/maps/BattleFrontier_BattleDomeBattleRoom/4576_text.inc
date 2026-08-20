	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1067 BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro
	.globl gText_Rom_2298B4
gText_Rom_2298B4: @ 0x082298B4
	.string "ヒース『アッハッハッ!!\pきこえるっ? この だいかんせい!\nわたしたちの しあいを まえに\lみんな ウズウズ してるよっ!!\pアッハッハッ!!\pキミは わたしと たたかえる\nこうふんと きんちょうで\lピクピク ビクビク してるねっ!!\pでも だいじょうぶっ!!\pバトルドームの いちばんぼしっ!!\nドームスーパースター ヒースの かがやきで\lきみを てらして あげる からっ!!{EOS}"
	.if (. - gText_Rom_2298B4) > 0xbf
	.error "gText_Rom_2298B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2298B4) < 0xbf
	.space 0xbf - (. - gText_Rom_2298B4)
	.endif
