	@ data/maps/Route116/scripts.inc:447 Route116_Text_RusturfTunnelSign (+1 aliases)
	.globl Route116_Text_RusturfTunnelSign_Copy_Rom_1E6350
Route116_Text_RusturfTunnelSign_Copy_Rom_1E6350: @ 0x081E6350
	.string "カナズミと シダケを むすぶ\n「カナシダ トンネル」\pかいつう こうじは ちゅうしに なりました{EOS}"
	.if (. - Route116_Text_RusturfTunnelSign_Copy_Rom_1E6350) > 0x31
	.error "Route116_Text_RusturfTunnelSign_Copy_Rom_1E6350 may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_RusturfTunnelSign_Copy_Rom_1E6350) < 0x31
	.space 0x31 - (. - Route116_Text_RusturfTunnelSign_Copy_Rom_1E6350)
	.endif
	@ Embedded ROM bytes: file offset 0x1E6381, size 0x36
	.byte 0x03, 0x8C, 0x63, 0x1E, 0x08, 0x05, 0x90, 0x63, 0x1E, 0x08, 0x00, 0x29, 0x75, 0x08, 0x02, 0xA6
	.byte 0x03, 0x02, 0x0F, 0x00
	.4byte PacifidlogTown_Text_NeatHousesOnWater
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte PacifidlogTown_Text_FastRunningCurrent
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte PacifidlogTown_Text_SkyPillarTooScary
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0x99
	.byte 0x64, 0x1E, 0x08, 0x09, 0x03, 0x02
