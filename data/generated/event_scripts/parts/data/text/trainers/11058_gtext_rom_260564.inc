	@ data/text/trainers.inc:2672 Route124_Text_LilaPostRematch
	.globl gText_Rom_260564
gText_Rom_260564: @ 0x08260564
	.string "カコ『はーあ\pあたしに すてきな かれしが いたらなぁ\nすてきな コンビネーションで\lどんな あいてにでも かっちゃうのに$"
	.if (. - gText_Rom_260564) > 0x3e
	.error "gText_Rom_260564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260564) < 0x3e
	.space 0x3e - (. - gText_Rom_260564)
	.endif
