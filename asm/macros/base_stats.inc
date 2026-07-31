@ Pokemon base stats entry macro.
@ Emits one global species label followed by one fixed-size 28-byte entry.
@
@ EV arguments are ordered as:
@   HP, Attack, Defense, Speed, Sp. Attack, Sp. Defense

.macro base_stats species, hp, attack, defense, speed, sp_attack, sp_defense, type1, type2, catch_rate, base_exp, ev_hp, ev_attack, ev_defense, ev_speed, ev_sp_attack, ev_sp_defense, item1, item2, gender_ratio, egg_cycles, base_friendship, growth_rate, egg_group1, egg_group2, ability1, ability2, safari_flee_rate, body_color_and_flip
	.globl \species
\species:
	.byte \hp, \attack, \defense, \speed, \sp_attack, \sp_defense
	.byte \type1, \type2
	.byte \catch_rate, \base_exp
	.hword ((\ev_hp) | ((\ev_attack) << 2) | ((\ev_defense) << 4) | ((\ev_speed) << 6) | ((\ev_sp_attack) << 8) | ((\ev_sp_defense) << 10))
	.hword \item1, \item2
	.byte \gender_ratio, \egg_cycles, \base_friendship, \growth_rate
	.byte \egg_group1, \egg_group2
	.byte \ability1, \ability2
	.byte \safari_flee_rate, \body_color_and_flip
	.hword 0
.endm
