	@ data/maps/TrainerHill_Entrance/scripts.inc:336 TrainerHill_Roof_Text_YouFinallyCameBravo
	.globl gText_Rom_23BD13
gText_Rom_23BD13: @ 0x0823BD13
	.string "ムム!\pついに きたね!\nきてしまったね!\pンー わかっているさー!\nなんで きみが こんなところまで\lひとりで きてしまったのか!\pここの オーナーである\nこの わたくしと……\pタッグを くみにきたんだろー!\nワオ!\p……あ\nちがうの?\pいや きみの たたかい みせてもらったよ\nじつに すばらしかった! ブラボー!"
	.byte EOS
	.if (. - gText_Rom_23BD13) > 0xa0
	.error "gText_Rom_23BD13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BD13) < 0xa0
	.space 0xa0 - (. - gText_Rom_23BD13)
	.endif
