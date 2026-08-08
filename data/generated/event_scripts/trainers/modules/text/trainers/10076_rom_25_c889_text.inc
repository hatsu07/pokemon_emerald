	@ data/text/trainers.inc:1229 Route113_Text_ToriDefeat (+1 aliases)
	.globl gText_Rom_25C889
gText_Rom_25C889: @ 0x0825C889
	.string "ナナ『まけちゃった\nつまんないから かざんばい あつめよ!$"
	.if (. - gText_Rom_25C889) > 0x1e
	.error "gText_Rom_25C889 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25C889) < 0x1e
	.space 0x1e - (. - gText_Rom_25C889)
	.endif
