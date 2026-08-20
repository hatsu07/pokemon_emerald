	@ data/maps/Route116/scripts.inc:447 Route116_Text_RusturfTunnelSign (+1 aliases)
	.globl gText_Rom_1EC32C
gText_Rom_1EC32C: @ 0x081EC32C
	.string "カナズミと シダケを むすぶ\n「カナシダ トンネル」\pかいつう こうじは ちゅうしに なりました{EOS}"
	.if (. - gText_Rom_1EC32C) > 0x31
	.error "gText_Rom_1EC32C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC32C) < 0x31
	.space 0x31 - (. - gText_Rom_1EC32C)
	.endif
