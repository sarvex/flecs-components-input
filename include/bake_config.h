/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef REFLECS_COMPONENTS_INPUT_BAKE_CONFIG_H
#define REFLECS_COMPONENTS_INPUT_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <reflecs>

/* Headers of private dependencies */
#ifdef REFLECS_COMPONENTS_INPUT_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if REFLECS_COMPONENTS_INPUT_IMPL && defined _MSC_VER
#define REFLECS_COMPONENTS_INPUT_EXPORT __declspec(dllexport)
#elif REFLECS_COMPONENTS_INPUT_IMPL
#define REFLECS_COMPONENTS_INPUT_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
#define REFLECS_COMPONENTS_INPUT_EXPORT __declspec(dllimport)
#else
#define REFLECS_COMPONENTS_INPUT_EXPORT
#endif

#endif

