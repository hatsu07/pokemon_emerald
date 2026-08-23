
	@ src/pokemon_storage_system.c:873 pokemon_storage_system_line_873
.Lbatch81_text_start_gText_Rom_5CB46D: @ 0x085CB46D
	.string "どうぐせいり{EOS}"
	.if (. - .Lbatch81_text_start_gText_Rom_5CB46D) > 0x7
	.error ".Lbatch81_text_start_gText_Rom_5CB46D may not grow beyond its original slot"
	.endif
	.if (. - .Lbatch81_text_start_gText_Rom_5CB46D) < 0x7
	.space 0x7 - (. - .Lbatch81_text_start_gText_Rom_5CB46D)
	.endif
