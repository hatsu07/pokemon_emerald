@ Pokemon base stats macro
@ Emits one fixed-size 28-byte entry.

	.macro base_stats species, hp, attack, defense, speed, sp_attack, sp_defense, type1, type2, catch_rate, base_exp, ev_yield, item1, item2, gender_ratio, egg_cycles, base_friendship, growth_rate, egg_group1, egg_group2, ability1, ability2, safari_flee_rate, body_color_and_flip
	.globl \species
\species:
	.byte \hp
	.byte \attack
	.byte \defense
	.byte \speed
	.byte \sp_attack
	.byte \sp_defense
	.byte \type1
	.byte \type2
	.byte \catch_rate
	.byte \base_exp
	.hword \ev_yield
	.hword \item1
	.hword \item2
	.byte \gender_ratio
	.byte \egg_cycles
	.byte \base_friendship
	.byte \growth_rate
	.byte \egg_group1
	.byte \egg_group2
	.byte \ability1
	.byte \ability2
	.byte \safari_flee_rate
	.byte \body_color_and_flip
	.hword 0
	.endm
