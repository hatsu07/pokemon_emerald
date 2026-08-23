	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
.Lbatch81_text_start_gText_Rom_5CB474: @ 0x085CB474
	.string "さようなら{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CB474) > 0x6
	.error ".Lbatch81_text_start_gText_Rom_5CB474 may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CB474) < 0x6
	.space 0x6 - (. - .Lbatch81_text_start_gText_Rom_5CB474)
	.endif
