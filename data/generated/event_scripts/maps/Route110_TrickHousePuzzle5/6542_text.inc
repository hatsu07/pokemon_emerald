	@ data/maps/Route110_TrickHousePuzzle5/scripts.inc:952 Route110_TrickHousePuzzle5_Text_Mechadoll4Quiz1
	.globl gText_Rom_23FB9A
gText_Rom_23FB9A: @ 0x0823FB9A
	.string "からくりニンギョウ 4ゴウ くいずヨ!\pうみのいえには だんせいと じょせい\nどちらが おおい?{EOS}"
	.if (. - gText_Rom_23FB9A) > 0x31
	.error "gText_Rom_23FB9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23FB9A) < 0x31
	.space 0x31 - (. - gText_Rom_23FB9A)
	.endif
