	@ data/maps/Route110_TrickHouseEnd/scripts.inc:280 Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent
	.globl gText_Rom_23DC85
gText_Rom_23DC85: @ 0x0823DC85
	.string "みとめたくは ないんだが\nあんたには まけた……!\pまあ なんども きてくれた あたり\nよっぽど わがはいに\lみりょくを かんじたの だろうけどな\pそのことと わがはいが まけたこととは\nかんけいなし!\pそうだ! あんたと わがはいの\nゆうじょうを きねんして\lいいものを プレゼント しよう!\p「あかいテント」と「あおいテント」\nふたつ あるんだが どっちが ほしい?"
	.byte EOS
	.if (. - gText_Rom_23DC85) > 0xba
	.error "gText_Rom_23DC85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23DC85) < 0xba
	.space 0xba - (. - gText_Rom_23DC85)
	.endif
