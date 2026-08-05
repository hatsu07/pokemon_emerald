	@ data/text/apprentice.inc:115 gText_ApprenticeWhichLevelMode5
	.globl gText_Rom_26D90E
gText_Rom_26D90E: @ 0x0826D90E
	.string "サンキュー そう こなくっちゃ!\nんじゃ てはじめに かるいのを 1つね!\pあのさ バトルタワー って\nレベルが 2しゅるい あるじゃん?\lレベル50と オープンレベル!\pいそがしい オレ だったら\nどっちで がんばれば いいかな?"
	.byte EOS
	.if (. - gText_Rom_26D90E) > 0x75
	.error "gText_Rom_26D90E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D90E) < 0x75
	.space 0x75 - (. - gText_Rom_26D90E)
	.endif
